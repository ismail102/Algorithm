#include<bits/stdc++.h>
using namespace std;
#define Max 100005
int BLOCK;
int cnt[Max], ara[Max],ans;
struct node {
    int L, R, i;
}q[Max];

bool cmp(node x, node y) {
    if(x.L/BLOCK != y.L/BLOCK){
        return x.L/BLOCK < y.L/BLOCK;
    }
    return x.R < y.R;
}
void add(int pos) {
    cnt[ara[pos]]++;
    if(cnt[ara[pos]] == 1) {
        ans++;
    }
}
void remove(int pos) {
    cnt[ara[pos]]--;
    if(cnt[ara[pos]] == 0) {
        ans--;
    }
}
int main() {
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }

        int m;
        scanf("%d", &m);

        for(int i=0; i<m; i++) {
            scanf("%d%d", &q[i].L, &q[i].R);
        }

        BLOCK=sqrt(n);

        sort(q, q + m, cmp);

        int curL = 0, curR = 0;
        ans=0;
        for(int i=0; i<m; i++) {

            int L = q[i].L, R = q[i].R;

            while(curL < L) {
                remove(curL);
                curL++;
            }
            while(curL > L) {
                add(curL-1);
                curL--;
            }
            while(curR <= R) {
                add(curR);
                curR++;
            }
            while(curR > R+1) {
                remove(curR-1);
                curR--;
            }
            printf("%d\n",ans);
        }
    return 0;
}
