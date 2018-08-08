#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define Max 10005
bool AP[Max];
bool vis[Max];
vector<int>edge[Max];
int parent[Max];
int discv[Max];
int low[Max];
int tim;
void SetValue()
{
    for(int i=0;i<=Max;i++){

        vis[i]=AP[i]=false;
        low[i]=0;
        parent[i]=-1;
        edge[i].clear();
    }
    tim = 0;
}
void dfs(int u)
{

    vis[u]=true;
    discv[u]=low[u]=(++tim);

    int child = 0;

    for(int i=0;i<edge[u].size();i++){
        int v = edge[u][i];
        if(v==parent[u]) continue;
        if(!vis[v]){
            child++;
            parent[v] = u;
            dfs(v);

            low[u] = min(low[u],low[v]);

            if(parent[u]!=-1 and low[v]>=discv[u]){
                AP[u]=true;
            }
            if(parent[u]==-1 and child>1) {
                AP[u]=true;
            }
        }

        low[u] = min(discv[v],low[u]);

    }

}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        SetValue();
        int u,v;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            u--;
            v--;
            edge[u].pb(v);
            edge[v].pb(u);
        }
        for(int i=0;i<n;i++){

            if(!vis[i]){
                dfs(i);
            }
        }

        for(int i=0;i<n;i++){
            if(AP[i]){
                cout<<i+1<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
