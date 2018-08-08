#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define Max 100005
vector<int>edge[Max],cost[Max],idxe[Max];
int baseArray[Max],node;
int chainIdx[Max],chainHead[Max],posInBase[Max];
int L[Max],An[Max][25],subTreesize[Max];
int edgeEnd[Max];
int tree[3*Max];
int pos,chainNo;
void dfs(int f,int u,int d)
{
    An[u][0] = f;
    L[u] = d;
    subTreesize[u] = 1;

    for(int i=0;i<edge[u].size();i++){
        int v = edge[u][i];
        int idxv = idxe[u][i];
        if(v==f) continue;
        edgeEnd[idxv] = v;
        dfs(u,v,d+1);
        subTreesize[u] += subTreesize[v];
    }

}
void HLD(int curNode,int w,int f){

    if(chainHead[ chainNo ] == -1){
        chainHead[chainNo] = curNode;
    }
    chainIdx[curNode] = chainNo;
    ++pos;
    posInBase[curNode] = pos;
    baseArray[pos] = w;

    int sc = -1,maxsize=-1,ncost;

    for(int i=0;i<edge[curNode].size();i++){

        int v = edge[curNode][i];
        if(v != f){
            if( sc==-1 or subTreesize[sc] < subTreesize[v]){
                maxsize = subTreesize[v];
                ncost = cost[curNode][i];
                sc = v;
            }
        }

    }

    if(sc!=-1){
        HLD(sc,ncost,curNode);
    }

    for(int i=0;i<edge[curNode].size();i++){
        int v = edge[curNode][i];
        int vcost = cost[curNode][i];
        if(v!=f){
            if(sc != v){
                chainNo++;
                HLD(v,vcost,curNode);
            }
        }
    }
}

void Make_tree(int node,int s,int e)
{
    if(s==e){
       // cout<<s<<" = "<<baseArray[s]<<endl;
        tree[node]=baseArray[s];
        return;
    }
    int mid = (s+e)/2;

    int left = node<<1;
    int right = left+1;

    Make_tree(left,s,mid);
    Make_tree(right,mid+1,e);
    tree[node] = max(tree[left],tree[right]);
}
void Update_tree(int node,int s,int e,int i,int w)
{
    if(s>i or e<i) return;
    if(s==i and e==i){
        baseArray[i] = w;
        tree[node] = w;
        return;
    }

    int mid = (s+e)/2;
    int left = node<<1;
    int right = left + 1;
    Update_tree(left,s,mid,i,w);
    Update_tree(right,mid+1,e,i,w);
    tree[node] = max(tree[left],tree[right]);
}

int query_tree(int node,int s,int e,int i,int j)
{
    if(s>j or e<i) return -1;
    if(s>=i and e<=j){
        return tree[node];
    }

    int mid = (s+e)/2;
    int left = node<<1;
    int right = left + 1;
    int l = query_tree(left,s,mid,i,j);
    int r = query_tree(right,mid+1,e,i,j);
    return max(l,r);
}

int query_up(int u,int v)
{
    if(u==v) return 0;
    int uchain, vchain = chainIdx[v],maxans=-1;

    while(1){

        uchain = chainIdx[u];
        if(uchain == vchain){

            if(u==v) break;
         /*   cout<<"-------Same Chain-----"<<endl;
           cout<<posInBase[v]<<' '<<posInBase[u]<<endl;
           cout<<baseArray[posInBase[v]]<<' '<<baseArray[posInBase[u]]<<endl;
            for(int i=posInBase[v];i<=posInBase[u];i++){
             cout<<baseArray[i]<<' ';
            }
            cout<<endl;*/
            int ans = query_tree(1,1,pos,posInBase[v], posInBase[u] );
            if(maxans<ans){
                maxans = ans;
            }
          //  cout<<"ans = "<<ans<<endl;
            break;
        }
       // cout<<"-------different Chain-------"<<endl;
           // cout<<"chainNO = "<<uchain<<' '<<"chainHead = "<<chainHead[uchain]<<endl;
           // cout<<"position = "<<posInBase[chainHead[uchain]]<<' '<<"value = "<<baseArray[posInBase[chainHead[uchain]]]<<endl;

           // cout<<"u = "<<u<<' '<<posInBase[u]<<endl;
           // cout<<posInBase[chainHead[uchain]]<<"<===>"<<posInBase[u]<<endl;
            int ans = query_tree(1,1,pos,posInBase[chainHead[uchain]], posInBase[u]);
           // cout<<"ans = "<<ans<<endl;
            if(maxans<ans){
                maxans = ans;
             }
            u = chainHead[uchain];
            u = An[u][0];
    }
    return maxans;
}
int sparsetable(int n)
{

    for(int j = 1; (1<<j) < n; j++){
        for(int i=0;i<n;i++){
            if(An[i][j-1] != -1){
                An[i][j] = An[An[i][j-1]][j-1];
            }
        }
    }
   /* 
    for(int j=0; j<3;j++){
        cout<<"j = "<<j<<' '<<An[9][j]<<endl;
    }*/

}
int LCA(int p,int q)
{
   // cout<<"dept = "<<L[p]<<' '<<L[q]<<endl;
    if(L[p]<L[q]) swap(p,q);

    int log = 1;

    while(1){
        int next = log + 1;
        if((1<<next) > L[p]) break;
        log++;
    }

    for(int i=log;i>=0;i--){
        if(L[p] - (1<<i) >= L[q]){
           // cout<<"p = "<<p<<' '<<An[p][i]<<' '<<i<<endl;
            p = An[p][i];
        }
    }
    //cout<<"p="<<p<<' '<<q<<endl;
    if(p==q) return p;

    for(int i=log;i>=0;i--){
        if(An[p][i]!=-1 and An[p][i] != An[q][i]){
            p = An[p][i];
            q = An[q][i];
        }
    }
    return An[p][0];
}

int query(int u,int v)
{
    int lca = LCA(u,v);
   // cout<<lca<<endl;
   // cout<<"u = "<<u<<' '<<lca<<endl;
   // cout<<"v = "<<v<<' '<<lca<<endl;
    int ans = query_up(u,lca);
    int temp = query_up(v,lca);
    ans = max(ans,temp);
    return ans;
}
void change(int i,int w)
{
    int u = edgeEnd[i];
   // cout<<posInBase[u]<<' '<<u<<' '<<i<<endl;
    Update_tree(1,1,pos,posInBase[u],w);
}
int main()
{
    edgeEnd[1] = 1;
    int t,cas=1;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<=n;i++){
            edge[i].clear();
            idxe[i].clear();
            cost[i].clear();
            chainHead[i] = -1;
        }
        memset(An,-1,sizeof(An));
        int u,v,w;
        for(int i=1;i<n;i++){

            scanf("%d%d%d",&u,&v,&w);

            u--,v--;
            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
            idxe[u].push_back(i+1);
            idxe[v].push_back(i+1);

        }
        pos = 0;
        chainNo=0;
        int root=0;

        dfs(-1,root,0);
        HLD(root,-1,-1);

       /* for(int i=1;i<=pos;i++){
         cout<<baseArray[i]<<' ';
        }

        cout<<endl;

       /* for(int i=0;i<n;i++){
            cout<<"node = "<<i+1<<' '<<"chainNo = "<<chainIdx[i]<<"  Head = "<<chainHead[chainIdx[i]]+1<<endl;
        }

       /* for(int i=0;i<n-1;i++){
            cout<<"node = "<<edgeEnd[i]+1<<endl;
        }*/

       // cout<<pos<<endl;
        Make_tree(1,1,pos);

        sparsetable(n);

        int q,f;
        scanf("%d",&q);

        printf("Case %d:\n",cas++);

        for(int i=0;i<q;i++){
            scanf("%d%d%d",&f,&u,&v);
            if(f==0){
                u--,v--;
                int ans = query(u,v);
                printf("%d\n",ans);
            }
            else{
                //for(int i=1;i<=pos;i++) cout<<baseArray[i]<<' ';
                cout<<endl;
                change(u+1,v);
               /* for(int i=1;i<=pos;i++){
                    cout<<baseArray[i]<<' ';
                }
                cout<<endl;*/
            }
        }

    }

    return 0;
}