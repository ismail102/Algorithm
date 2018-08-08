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
const ll Mod = 10000007;
ull  bigmod ( ull a, ull p )
{
    if ( p == 0 )return (ull)1;

    if ( p % 2 ){
        return ( ( a % Mod ) * ( bigmod ( a, p - 1 ) ) ) % Mod; 
    }
    else{
        ull c = bigmod ( a, p / 2); 
        return ( (c%Mod) * (c%Mod) ) % Mod;
    }
}
