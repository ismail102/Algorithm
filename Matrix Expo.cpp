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
int dx[]={+1,-1,0,0};
int dy[]={0,0,+1,-1};
int Set(int n,int pos){ return n = (n | (1<<pos));}
bool check(int n,int pos){return (bool)(n & (1<<pos));}
int clearr(int n,int pos){return n = (n & ~(1<<pos));}
int update(int n,int pos){return n = (n ^ (1<<pos));}
ll A[5][5],B[5][5],ans[5][5];
//const ll Mod = 10000007;

void Multiplication(ll x,int m,ll Mod)
{
    if(x%2){
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                ll ret = 0;
                for(int k=0;k<m;k++){
                    ll r = (A[i][k] * B[k][j])%Mod;
                    if(r>=Mod){
                       ret += r%Mod;
                    }
                    else ret += r%Mod;
                }
                ans[i][j] = ret;
            }
        }
    }

    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                ll ret = 0;
                for(int k=0;k<m;k++){
                    ll r = (A[i][k] * A[k][j])%Mod;
                    if(r>=Mod){
                       ret += r%Mod;
                    }

                    else ret += r%Mod;
                }
                ans[i][j] = ret;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            A[i][j] = ans[i][j];
        }
    }
}
void Matrix_Exponential(ll n,int m,ll Mod)
{
    if(n<=1) return;
    if(n%2)Matrix_Exponential(n-1,m,Mod);
    else Matrix_Exponential(n/2,m,Mod);

    Multiplication(n,m,Mod);
}


int main()
{
    //open();
    //show();
    int t,cas=0;
    ll n,a,b,m;
    scanf("%d",&t);

    while(t--){
    A[0][0] = 1,A[0][1] = 1;
    A[1][0] = 1,A[1][1] = 0;

    B[0][0] =1,B[0][1] = 1;
    B[1][0] = 1,B[1][1] = 0;

    scanf("%lld",&n);

    ll Mod = 1000000007;

    a = 1;
    b = 1;
    if(n==1 or n==2){
        cout<<1<<endl;
        continue;
    }

    Matrix_Exponential(m-2,2,Mod);

    ll ans = b*A[0][0] + a*A[0][1];

    cout<<ans<<endl;

    return 0;
}
