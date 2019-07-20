#include<stdio.h>
#include<malloc.h>

#define lli long long int
const int mod = 1000000000 + 9;
const int P = 53;

int strlen(char *str) {
    int len = 0;
    for(int i = 0;str[i]!='\0';i++) {
        len++;
    }
    return len;
}

void  rabinKarp(char *p,char *t) {
    int plen = strlen(p);
    int tlen = strlen(t);
    int sz = (plen + tlen);

    int pw[sz];
    int hash[tlen+5];
    for(int i=0;i<tlen;i++) hash[i] = 0;


    pw[0] = 1;
    for(int i = 1;i < sz; i++) {
        pw[i] = (pw[i-1] * P) % mod;
    }

    for(int i = 0; i < tlen; i++) {
        hash[i+1] = (hash[i] + (t[i] - 'a' + 1) * pw[i]) % mod;
    }

    int pHash = 0;

    for(int i = 0; i < plen; i++) {
        pHash = (pHash + (p[i] - 'a' + 1) * pw[i]) % mod;
    }

    int cnt=0;
    int ans[sz];
    for(int i = 0; i + plen - 1 < tlen; i++){
        int curHash = (hash[i + plen] + mod - hash[i]) % mod;
        if(curHash == (pHash * pw[i]) % mod) {
            ans[cnt++] = i;
        }
    }
    if(cnt==0) {
        puts("Not Found");
    }
    else {
        printf("%d\n",cnt);
        for(int i=0;i<cnt;i++){
            if(i==0){
                printf("%d",ans[i]+1);
            }
            else printf(" %d",ans[i]+1);
        }
        puts("");
    }

}

int main() {
    // freopen("input.txt","r",stdin);
    char p[1000005],t[1000005];
    int T;
    scanf("%d",&T);
    int cas = 1;
    while(T--){
        scanf("%s %s",t,p);
        if(cas > 1) {
            puts("");
        }
        rabinKarp(p,t);
        cas++;
    }
    return 0;
}