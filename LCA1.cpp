#include<bits/stdc++.h>
using namespace std;
#define Max 100005
int L[Max];
bool vis[Max];
int node[Max];
int nd = 0;
vector<int>edge[Max];
void dfs(int u,int d)
{
    L[nd] = d;
    //cout<<u<<' '<<d<<endl;
    vis[u] = true;
    node[nd++] = u;
    for(int i=0;i<edge[u].size();i++){
        int v = edge[u][i];
        if(!vis[v]){
            dfs(v,d+1);
            node[nd] = u;
            L[nd++] = d;
        }
    }
}
int main()
{
    int t;
    int n,m;
    while(cin>>n>>m)
    {
        int u,v;

        for(int i=0;i<=n;i++) edge[i].clear();

        memset(vis,false,sizeof(vis));

        for(int i=0;i<m;i++){
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        dfs(1,1);
       // cout<<L[0]<<' '<<L[1]<<endl;

        for(int i=0;i<nd;i++){
            cout<<node[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<nd;i++) cout<<L[i]<<' ';
        cout<<endl;
    }

    return 0;

}