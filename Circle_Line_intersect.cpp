#include<bits/stdc++.h>
#define PI acos(-1.0)
#define EPS 0.0000001
#define pdd pair<double,double>
using namespace std;
double A,B,C;
double r, a, b, c,x,y;
pdd equationSolve()
{ 
    double sqr = sqrt(B*B - 4*A*C);
    double x1 = -B + sqr;
    x1 = x1 / (2*A);
    double x2 = -B - sqr;
    x2 = x2/(2*A);
    return pdd(x1,x2);
}
bool PointPosition()
{
    double sqr = sqrt(a * a + b * b);
    double dist = (abs(a * x + b * y + c))/sqr;
    if(dist==r)  return false;
    return true;
}
void PointPrint(double x1,double x2,double y1,double y2)
{   printf("Point-1: ");
    cout<<"( "<<x1<<" , "<<y1<<" )\n";
    printf("Point-2: ");
    cout<<"( "<<x2<<" , "<<y2<<" )\n";
}
void CalculatePoint()
{
    pdd P;
    double x1,x2,y1,y2;
    double c1 = x*x + y*y - r*r;
        if(a==0){
            A = 1;
            B = 2*(-x);
            C = c*c/b*b - (2*(-y)*c)/b + c1;
            P = equationSolve();
            x1 = P.first,x2 = P.second,y1 = y2 = -(c/b);
            PointPrint(x1,x2,y1,y2);
        }
        else if(b==0){
            A = 1;
            B = 2*(-y);
            C = c*c/a*a - (2*(-x)*c)/a + c1;
            P = equationSolve();
            x1 = x2 = -(c/a),y1 = P.first,y2 = P.second;
            PointPrint(x1,x2,y1,y2);
        }
        else{
            double m = -(a/b);
            double c2 = -c/b;
            A = m*m + 1;
            B = 2*m*c2 + 2*(-y)*m + 2*(-x);
            C = c2*c2 + 2*(-y)*c2 + c1;
            if((B*B - 4*A*C)<=0){
                puts("Point Touch The Circle");
                cout<<(-B)/(2*A)<<' '<<m*(-B)/(2*A) - (c/b)<<endl;
               return;
            }
            //scout<<A<<' '<<B<<' '<<C<<endl;
            P = equationSolve();
            double y1 = m*P.first - (c/b);
            double y2 = m*P.second - (c/b);
            x1 = P.first,x2 = P.second;
            PointPrint(x1,x2,y1,y2);
        }
}
int main()
{
    freopen("/home/mukul/Desktop/input.txt","r",stdin);
    while(scanf("%lf%lf%lf",&x,&y,&r)!=EOF){
    scanf("%lf%lf%lf",&a,&b,&c);
    bool f = PointPosition();
    if(!f){
        puts("No Intersecting Point");
    }
    else{
        CalculatePoint();
    }
}
return 0;
}
