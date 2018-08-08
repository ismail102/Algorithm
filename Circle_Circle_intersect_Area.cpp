#include<bits/stdc++.h>
#define PI acos(-1.0)
#define EPS 0.0000001
#define pdd pair<double,double>
using namespace std;
struct Point{double x,y;};
struct Circle{Point c;double r;};

inline double sq(double x){return x*x;}

inline double sqDist(const Point &a,const Point &b)
{
    double dx =  sq(a.x - b.x);
    double dy =  sq(a.y - b.y);
    return  dx + dy;
}
inline double commonArea(const Circle &a, Circle &b){

    double dsq = sqDist(a.c, b.c);
    double d = sqrt((double)dsq);

    if(sq(a.r + b.r) <= dsq) return 0.0;
    if(a.r >= b.r && sq(a.r-b.r) >= dsq) return (double)(PI*sq(b.r));
    if(a.r <= b.r && sq(b.r-a.r) >= dsq) return (double)(PI*sq(a.r));

    double angleA = 2.0 * acos((a.r * a.r + dsq - b.r * b.r) / (2.0 * a.r * d));
    double angleB = 2.0 * acos((b.r * b.r + dsq - a.r * a.r) / (2.0 * b.r * d));
    return 0.5 * (a.r * a.r * (angleA - sin(angleA)) + b.r * b.r * (angleB - sin(angleB)));
}

int main()
{
    freopen("/home/mukul/Desktop/input.txt","r",stdin);
    double x1,x2,y1,y2,r1,r2;
    scanf("%lf%lf%lf",&x1,&y1,&r1);
    scanf("%lf%lf%lf",&x2,&y2,&r2);

    Circle a,b;
    a.c.x = x1, a.c.y = y1;
    b.c.x = x2, b.c.y = y2;
    a.r = r1, b.r = r2;

    double area = commonArea(a,b);
    cout<<"Two Circle intersecting Area is: ";
    cout<<area<<endl;
    
return 0;
}
