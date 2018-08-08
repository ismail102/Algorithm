#include<bits/stdc++.h>
using namespace std;
#define Max 100005
vector<int>edge[Max];
int dis[Max];
int prnt[Max];
int An[Max][25];
void dfs(int f,int u,int d)
{
    prnt[u] = f;

    dis[u] = d;

    for(int i=0;i<edge[u].size();i++){
        int v = edge[u][i];
        if(v==f) continue;
        dfs(u,v,d+1);
    }
}
void sparstable(int n){
    memset(An,-1,sizeof(An));
    for(int i=0;i<n;i++) An[i][0] = prnt[i];
    for(int j=1; (1<<j) < n ; j++){
        for(int i=0; i<n; i++){
               if(An[i][j-1] != -1) An[i][j] = An[An[i][j-1]][j-1];
        }
    }
}
int LCA(int p, int q){
    int log;
    if(dis[p] < dis[q]) swap(p,q);
    log = 1;
    while(1){
        int next = log + 1;
        if((1<<next) > dis[p]) break;
        log++;
    }
    for(int i=log;i>=0;i--){
        if(dis[p] - (1<<i) >= dis[q]) p = An[p][i];
    }
    if(p==q) return p;
    for(int i=log; i>=0; i--){
        if(An[p][i] != -1 and An[p][i] != An[q][i]){
            p = An[p][i];
            q = An[q][i];
        }
    }
    return prnt[p];
}
int main()
{
    int n,m;
    int u,v;
    cin>>n>>m;
    for(int i=0;i<=n;i++) edge[i].clear();
    for(int i=0;i<m;i++){
        cin>>u>>v;
        edge[u].push_back(v);
    }
    dfs(-1,0,0);
    sparstable(n);
    int p,q,Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>p>>q;
        int ans = LCA(p,q);
        cout<<ans<<endl;
    }
    return 0;
}