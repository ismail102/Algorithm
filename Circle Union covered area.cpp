#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std; 
#define px first
#define py second
typedef pair<double, double> point_t;
double dist(point_t a, point_t b){
	return sqrt((a.px-b.px)*(a.px-b.px)+(a.py-b.py)*(a.py-b.py));
} 
inline int sign(double x){
	return x>0 ? 1 : x==0 ? 0 : -1;
}
double area2(point_t a, point_t b, point_t c){
	return a.px*(c.py-b.py)+b.px*(a.py-c.py)+c.px*(b.py-a.py);
}
inline int convexity(point_t a, point_t b, point_t c){
	return sign(area2(a, b, c));
}
double chord(point_t a, point_t b){
	double d=dist(a, b);
	return asin(d/2)-sqrt(1-d*d/4)*d/2;
}
point_t crit(point_t a, point_t b){
	point_t res;
	double d=dist(a, b);
	res.px=(a.px+b.px)/2+(b.py-a.py)*sqrt(1-d*d/4)/d;
	res.py=(a.py+b.py)/2+(a.px-b.px)*sqrt(1-d*d/4)/d;
	return res;
}
void hull_edge(const vector<point_t> &points, vector<point_t> &res){
	res.push_back(points[0]);
	for(int i=1; i<points.size(); i++){
		while(res.size()>1 && convexity(res[res.size()-2], res.back(), points[i])==-1)
			res.pop_back();
		res.push_back(points[i]);
	}
	res.pop_back();
}
vector<point_t> convex_hull(vector<point_t> &points){
	vector<point_t> res;
	hull_edge(points, res);
	reverse(points.begin(), points.end());
	hull_edge(points, res);
	reverse(points.begin(), points.end());
	return res;
} 
int status(point_t p1, point_t p2, point_t p3){
	if(dist(p1, p2)>=2 || dist(p2, p3)>=2 || dist(p1, p3)>=2)
		return -1;
	if(p1==p3)
		return 0;
	point_t x12=crit(p1, p2);
	point_t x23=crit(p2, p3);
	point_t x13=crit(p1, p3);
	if(convexity(x12, p2, x23)!=1)
		return 0;
	if(convexity(x12, x23, x13)!=-1)
		return -1;
	return 1;
}
double solve(vector<point_t> &points){
	sort(points.begin(), points.end());
	points.resize(unique(points.begin(), points.end())-points.begin());
	double pi=2*acos(0);
	if(points.size()==1)
		return pi;
	vector<point_t> hull=convex_hull(points);
	hull.push_back(hull[0]);
	vector<point_t> shape;
	shape.push_back(hull[0]);
	for(int i=1; i<hull.size(); i++){
		while(shape.size()>1){
			int s=status(shape[shape.size()-2], shape.back(), hull[i]);
			if(s==-1)
				return 0.;
			if(s==0)
				break;
			shape.pop_back();
		}
		shape.push_back(hull[i]);
	}
	shape.pop_back();
	int start=0;
	{
		int s=status(shape.back(), shape[start], shape[start+1]);
		if(s==-1)
			return 0.;
		if(s==1){
			start++;
			for(int ch=1; ch;){
				ch=0;
				s=status(shape.back(), shape[start], shape[start+1]);
				if(s==-1)
					return 0.;
				if(s==1){
					ch=1;
					start++;
					continue;
				}
				s=status(shape[shape.size()-2], shape.back(), shape[start]);
				if(s==-1)
					return 0.;
				if(s==1){
					ch=1;
					shape.pop_back();
				}
			}
		}
	}
	shape.push_back(shape[start]);
	vector<point_t> cpnt;
	for(int i=start+1; i<shape.size(); i++)
		cpnt.push_back(crit(shape[i-1], shape[i]));
	cpnt.push_back(cpnt[0]);
	double res=0.;
	for(int i=1; i<cpnt.size(); i++){
		res+=chord(cpnt[i-1], cpnt[i]);
		res+=(cpnt[i].px-cpnt[i-1].px)*(cpnt[i].py+cpnt[i-1].py)/2;
	}
	return res;
}
int main(){
	int T, N;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &N);
		vector<point_t> points(N);
		for(int i=0; i<N; i++)
			scanf("%lf %lf", &points[i].px, &points[i].py);
		printf("%.6lf\n", solve(points));
	}
	return 0;
}
//brute force checker:
double bruteforce(const vector<point_t> &points){
	double lo=2001, hi=-2001;
	for(int i=0; i<points.size(); i++){
		lo<?=points[i].py;
		hi>?=points[i].py;
	}
	double res=0.;
	double increment=.00005;
	for(double y=hi-1+increment; y<lo+1; y+=increment){
		double l=-2001, r=2001;
		for(int i=0; i<points.size(); i++){
			l>?=points[i].px-sqrt(1.-(y-points[i].py)*(y-points[i].py));
			r<?=points[i].px+sqrt(1.-(y-points[i].py)*(y-points[i].py));
		}
		if(r>l)
			res+=increment*(r-l);
	}
	return res;
}
