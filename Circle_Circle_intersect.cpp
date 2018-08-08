#include<bits/stdc++.h>
#define PI acos(-1.0)
#define EPS 0.0000001
#define pdd pair<double,double>
using namespace std;
double A,B,C;
double r, a, b, c,x,y;
//---------------------------------------------------------------
//K = (1/4)sqrt(((rA+rB)^2-d^2)(d^2-(rA-rB)^2))
//d^2 = (xB-xA)^2 + (yB-yA)^2 
//---------------------------------------------------------------
//x = (1/2)(xB+xA) + (1/2)(xB-xA)(rA^2-rB^2)/d^2 ± 2(yB-yA)K/d^2 
//y = (1/2)(yB+yA) + (1/2)(yB-yA)(rA^2-rB^2)/d^2 ± -2(xB-xA)K/d^2 
//---------------------------------------------------------------
struct Point{double x,y;};
struct Circle{Point c;double r;};
inline double sq(double x){return x*x;}
inline double sqDist(const Point &a,const Point &b)
{
    double dx =  sq(a.x - b.x);
    double dy =  sq(a.y - b.y);
    return  dx + dy;
}
void IntersectingPoint(const Circle &a,const Circle &b)
{
    double d = sqrt(sq(a.c.x - b.c.x) + sq(a.c.y - b.c.y));

    if((a.r + b.r > d) and d > fabs(a.r - b.r)){ 
        double K = sqrt((d + a.r + b.r)*(d + a.r - b.r)*(d -  a.r + b.r)*(-d + a.r + b.r))/4.0;
        double x1 = (a.c.x + b.c.x)/2 + (b.c.x - a.c.x)*(sq(a.r) - sq(b.r))/(2*sq(d)) + 2*(a.c.y - b.c.y)*K/sq(d);
        double x2 = (a.c.x + b.c.x)/2 + (b.c.x - a.c.x)*(sq(a.r) - sq(b.r))/(2*sq(d)) - 2*(a.c.y - b.c.y)*K/sq(d);
        double y1 = (a.c.y + b.c.y)/2 + (b.c.y - a.c.y)*(sq(a.r) - sq(b.r))/(2*sq(d)) - 2*(a.c.x - b.c.x)*K/sq(d);
        double y2 = (a.c.y + b.c.y)/2 + (b.c.y - a.c.y)*(sq(a.r) - sq(b.r))/(2*sq(d)) + 2*(a.c.x - b.c.x)*K/sq(d);    
        cout<<"( "<<x1<<" , "<<y1<<" ) <====> "<<"( "<<x2<<" , "<<y2<<" )"<<endl;
    }
    else{
        puts("There is NO intersecting Point between circle");
    }
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
    printf("intersecting Point are: ");

    IntersectingPoint(a,b);
return 0;
}
