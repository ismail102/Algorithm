
/// ConvexHall ( GRAHAM SCAN )

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
    }
    return 0;
}