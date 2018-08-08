///    Author: Ismail Hossain(Mukul)
///    Univarsity: Chittagong University of Engineering Annd Technology(Bangladesh)
///    Uva:ISMAIL_HOSSAIN
///    Codeforces: ISMAIL_HOSSAIN
///    SPOJ:ismail_102
///    HackerRank: ismail_102
///    csacademy: ISMAIL_HOSSAIN
///    Facebook: Smily Mukul
 
//BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
#define sf              scanf
#define pf              print
#define dd              double
#define fr              first
#define sc              second
#define pb              push_back
#define MP              make_pair
#define ll              long long
#define PI              acos(-1.0)
#define vci             vector<ll>
#define pll             pair<ll, ll>
#define vcc             vector<char>
#define sz(a)           (a.size())
#define pii             pair<int, int>
#define vcs             vector<string>
#define read(a)         scanf("%d",&a)
#define readI1(a)       scanf("%I64d",&a)
#define read2(a,b)      scanf("%d%d",&a,&b)
#define FOR(i, s, e)    for(ll i=s; i<e; i++)
#define read3(a,b,c)    scanf("%d%d%d",&a,&b,&c)
#define readI2(a,b)     scanf("%I64d %I64d",&a,&b)
#define mem(a, b)       memset(ara, value, sizeof(ara))
#define readI3(a,b,C)   scanf("%I64d %I64d %I64d",&a,&b,&c)
#define open()          freopen("input.txt", "r", stdin)
#define show()          freopen("output.txt", "w", stdout)
#define one(a)          __biltin_popcount(a)
#define Max 2000+5
#define inf INFINITY
using namespace std;
typedef complex<double> base;
void fft (vector<base> & a, bool invert) {
	int n = (int) a.size();
	if (n == 1)  return;
    vector<base> a0 (n/2), a1 (n/2);
	for (int i=0, j=0; i<n; i+=2, ++j) {
        a0[j] = a[i];
        a1[j] = a[i+1];
	}
    fft (a0, invert);
    fft (a1, invert);
	double ang = 2*PI/n * (invert ? -1 : 1);
    base w (1), wn (cos(ang), sin(ang));
	for (int i=0; i<n/2; ++i) {
        a[i] = a0[i] + w * a1[i];
        a[i+n/2] = a0[i] - w * a1[i];
		if (invert){
            a[i] /= 2;
            a[i+n/2] /= 2;
        }
        w *= wn;
	}
}
/*
1. Build two different vectors with coefficient of the equation ( 3 + x + 2x^2 will be [3,1,2] )
2. Send them to multiply ( arr, brr, res )
3. res vector contains result of multiplication.
WARNING: FFT causes precision error. multiply() rounds them to integer.
*/
void multiply (const vector<int> & a, const vector<int> & b, vector<int> & res) {
    vector<base> fa (a.begin(), a.end()), fb (b.begin(), b.end());
	int n = 1;
	while (n < max (a.size(), b.size())) n <<= 1;
    n <<= 1;
    fa.resize (n), fb.resize (n);
    fft (fa, false), fft (fb, false);

    for(int i=0;i<n;i++) cout<<(int (fa[i].real()+0.5))<<' ';
    cout<<endl;
    for(int i=0;i<n;i++) cout<<(int (fb[i].real()+0.5))<<' ';
    cout<<endl;


	for (int i=0; i<n; ++i){ 
	    fa[i] *= fb[i];
	}
    
    fft (fa, true);
    res.resize (n);
	for (int i=0; i<n; ++i){
	    res[i] = int (fa[i].real() + 0.5);
	}

    for(int i=0;i<n;i++){
        cout<<res[i]<<' ';
    }
    cout<<endl;

}
int main()
{
    vector<int>res,a,b;
    int na,nb;
    cin>>na;
    int x;
    a.clear(),b.clear(),res.clear();

    for(int i=0;i<na;i++){
        cin>>x;
        a.pb(x);
        b.pb(x);
    }
//    reverse(a.begin(),a.end());
 //   reverse(b.begin(),b.end());
   multiply(a,b,res);


   a.clear();

    for(int i=0;i<res.size();i++){cout<<res[i]<<' ';}

    int carry = 0;
    for (int i=0;i<res.size();i++){
        res[i] += carry;
        carry = res[i]/10;
        res[i] %= 10;
    }
    cout<<endl;
    int j = res.size()-1;
    for(int i=0;i<res.size();i++){
        cout<<res[i];
        a.pb(res[i]);
    }

    cout<<"again"<<endl;

    res.clear();

    multiply(a,b,res);
cout<<endl;

cout<<endl;
    return 0;
}