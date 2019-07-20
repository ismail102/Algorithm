#include<stdio.h>
#define max 1000005
int pi[max];
int strlen(char *str) {
    int len = 0;
    for(int i=0;str[i]!='\0';i++) {
        len++;
    }
    return len;
}
void piFunction(char *s) {
    pi[0] = 0;
    pi[1] = 0;
    
    int len = strlen(s);
    int j = 0;
    for(int i = 2; i <= len; i++) {
        j = pi[i - 1];
        while(1) {
            if(s[j] == s[i-1]) {
                pi[i] = j + 1;
                break;
            }
            if(j==0) {
                pi[i] = 0;
                break;
            }
            j = pi[j];
        }
    }
}
int ans[max];
int cnt=0;
void KMP(char *t, char *p) {
    int plen = strlen(p);
    int tlen = strlen(t);

    int i = 0;
    int j = 0;

    while(i < tlen) {
        if(t[i] == p[j]) {
            i++;j++;
            if(j == plen){
                ans[cnt++] = i - plen + 1;
                j = 0;
            }
        }
        else {
            if(j==0) i++;
            else j = pi[j];
        }

    }

}

int main() {
    // freopen("input.txt","r",stdin);
    int t;
    char P[max],T[max];
    scanf("%d",&t);
    int cas = 1;
    while(t--) {
        cnt = 0;
        scanf("%s %s",T,P);
        piFunction(P);
        KMP(T,P);
        int len = strlen(P);

        if(cas++ > 1) puts("");

        if(cnt==0) {
            puts("Not Found");
        }
        else {
            printf("%d\n",cnt);
            for(int i = 0; i < cnt; i++) {
                if(i==0) printf("%d",ans[i]);
                else printf(" %d",ans[i]);
            }
            printf("\n");
        }
    }
    return 0;
}