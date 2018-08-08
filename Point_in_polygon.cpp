#include<bits/stdc++.h>
using namespace std;
#define Max 10005
struct Point{
    int x,y;
}P[Max],CH[Max];


int dist( Point a, Point b)
{
    return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
}

int cross(Point o, Point a, Point b)
{
    return(o.x - a.x)*(o.y - b.y) - (o.y - a.y)*(o.x - b.x);
}
bool compare_position( Point a, Point b)
{
    return(a.y < b.y) or (a.y == b.y  and a.x < b.x);
}
bool compare_angle(Point a, Point b)
{
    int c = cross(P[0],a,b);

    return (c > 0) or (c==0 and dist(P[0],a) < dist(P[0],b));
}



bool inConvexpolygon(int np, Point p) {
    int st = 1, en = np - 1, mid;
    while(en - st > 1) {
        mid = (st + en)>>1;
        if(cross(CH[0], CH[mid], p) < 0) en = mid;
        else st = mid;
    }
    if(cross(CH[0], CH[st], p) < 0) return false;
    if(cross(CH[st], CH[en], p) < 0) return false;
    if(cross(CH[en], CH[0], p) < 0) return false;
    return true;
}

double Polygon_Area(int np)
{
    double area = 0.0;

    for(int i=0;i<np;i++){
        area+= CH[i].x*CH[i+1].y - CH[i].y*CH[i+1].x;
    }

    area = abs(area)/2.0;
    return area;

}




int Graham_scan(int n)
{
    swap(P[0],*min_element(P,P+n,compare_position));

    sort(P+1,P+n,compare_angle);

    P[n] = P[0];

    int j=0;
    for(int i=0;i<=n;i++){

        while(j>=2 and cross(CH[j-2], CH[j-1], P[i])<=0) j--;
        CH[j++] = P[i];
    }
   return --j;
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++){
            scanf("%d %d",&P[i].x, &P[i].y);
        }
        int NP = Graham_scan(n);
        for(int i=0;i<=NP;i++){
            if(i!=NP) printf("(%d, %d)==>",CH[i].x,CH[i].y);
            else printf("(%d, %d)",CH[i].x,CH[i].y);
        }


        ///input a point to check is it inside or outside
        Point p;
        //scanf("%d %d",&p.x,&p.y);
       // cout<<p.x<<' '<<p.y<<endl;

       // bool f =  inConvexpolygon(NP,p);

        ///if(f) printf("Inside the polygon\n");
        //else printf("outside the polygon\n");

        /// Calculate the Total Area of Convexpolygon
        double area = Polygon_Area(NP);
        printf("Area: %lf\n",area);
    }
    return 0;
}