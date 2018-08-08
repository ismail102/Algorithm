/* 
    এই RMQ টা  নির্দিষ্ট size এর রেন্জ এর জন্য
    রেন্জ এর left এবং right ভিন্ন হতে হবে
*/

#include<bits/stdc++.h>
using namespace std;
#define Max 100005
#define pii pair<int,int>
int L[Max];
bool vis[Max];
int ara[Max];
struct st{
    int R,L;
    int sz;
}s[Max];

void RMQ(int n)
{
    deque<pii>DQ;
    vector<int>vc;

    for(int i=0;i<n;i++){

        while(!DQ.empty() and DQ.front().first>=ara[i]){
            DQ.pop_front();
        }

        DQ.push_front(pii(ara[i],i));

        while(!DQ.empty() and s[i].sz>0 and   DQ.back().second<=i - s[i].sz){

            DQ.pop_back();
        }

        if( s[i].sz>0 and i>=s[i].sz - 1){
            cout<<DQ.back().second<<' '<<DQ.back().first<<endl;
            vc.push_back(DQ.back().second);
        }

    }

    for(int i=0;i<vc.size();i++) cout<<vc[i]<<' ';
    cout<<endl;
}

int main()
{
    int t;
    int n,m;
    while(cin>>n)
    {
        for(int i=0;i<n;i++) cin>>ara[i];
        int q;
       cin>>q;

        memset(s,0,sizeof(s));
        int l,r;
        for(int i=0;i<q;i++){
            cin>>l>>r;
            s[r-1].sz = r - l + 1;
        }
        RMQ(n);
        
    }

    return 0;

}