#include<bits/stdc++.h>
#define PI acos(-1.0);
#define EPS 0.0000001
using namespace std;

int main(){

    double x=2,y=-3;
    double r=2, a=2, b=2, c=1;

double xt,yt;

if(x<0.0){
    xt = x; 
}
if(x>0.0) xt = -1*x;

if(y<0.0) yt = y;
if(y>0.0) yt = -1*y;

c = c + a*(xt) + b*(yt);

cout<<c<<endl;

double x0 = -a*c/(a*a+b*b), y0 = -b*c/(a*a+b*b);
if (c*c > r*r*(a*a+b*b)+EPS)
    puts ("no points");
else if (abs (c*c - r*r*(a*a+b*b)) < EPS) {
    puts ("1 point");
    cout << x0 << ' ' << y0 << '\n';
}
else {
    double d = r*r - c*c/(a*a+b*b);
    double mult = sqrt (d / (a*a+b*b));
    double ax, ay, bx, by;
    ax = x0 + b * mult;
    bx = x0 - b * mult;
    ay = y0 - a * mult;
    by = y0 + a * mult;
    puts ("2 points");
    cout << ax << ' ' << ay << '\n' << bx << ' ' << by << '\n';
}
}