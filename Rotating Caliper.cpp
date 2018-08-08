#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)
#define Max 100005
struct Point
{
    int x,y;

}P[Max],CH[Max];

double dist(Point a,Point b)
{
    return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
}
double cross(Point a,Point o,Point b)
{
    return (a.x - o.x)*(b.y - o.y) - (a.y - o.y)*(b.x - o.x);
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
   return j;
}


double polygonDiameter(int n)
{
   if(n<2) return 0.0;

   if(n==2){
        return sqrt(dist(P[0],P[1]));
   }

   int i = n-1;
   int j = 0;
   int k = 1;

   while(fabs(cross(CH[k+1],CH[i],CH[j])) > fabs(cross(CH[k],CH[i],CH[j]))) k++;

   i = 0;
   j = k;
   double res = 0.0;
   while(i<=k and j<n)
   {
       res = max(res,sqrt(dist(CH[i],CH[j])));
        while(j<n-1 and fabs(cross(CH[j+1],CH[i],CH[i+1])) > fabs(cross(CH[j],CH[i],CH[i+1]))){
            j++;
            res = max(res,sqrt(dist(CH[i],CH[j])));
        }
        i++;
   }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&P[i].x,&P[i].y);
    }
    int np = Graham_scan(n);


    double ans = polygonDiameter(np);
    printf("%lf\n",ans);

}
