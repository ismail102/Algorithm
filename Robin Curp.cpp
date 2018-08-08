#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
string text,pattern;
bool check(int l,int r)
{
    //cout<<text<<' '<<pattern<<endl;
    //cout<<l<<' '<<r-1<<endl;
    for(int i=l,j=0;i<r;i++,j++){
        if(text[i] != pattern[j]) return false;
    }
    return true;
}
ull Hash(string s,int m,ull B,ull Mod)
{
    ull h=0,power=1;
    for(int i=m-1;i>=0;i--){

        h = h+ (s[i]*power)%Mod;
        h%=Mod;
        power = (power*B)%Mod;
    }

    return h;

}
int match()
{
    int n = text.size();
    int m = pattern.size();
    if(n<m) return -1;
    if(m==0 or n==0) return -1;

    ull power = 1;

    ull B=101,Mod=1000000000 + 7;

    for(int i=1;i<=m-1;i++){
        power = (power*B)%Mod;
    }
    //cout<<"pow = "<<power<<endl;
    ull hash_text = Hash(text,m,B,Mod);
    ull hash_pattern = Hash(pattern,m,B,Mod);

    //cout<<hash_text<<' '<<hash_pattern<<endl;
    if(hash_text == hash_pattern){
        if(check(0,m)==true) return 0;
    }

    for(int i=m;i<n;i++){
        hash_text = (hash_text - (text[i-m]*power)%Mod)%Mod;
        hash_text = (hash_text + Mod)%Mod;
        hash_text = (hash_text*B)%Mod;
        hash_text = (hash_text + text[i])%Mod;

        if(hash_text == hash_pattern){
            if(check(i-m+1,i+1)==true)
                return i-m+1;
        }
    }
    return -1;
}
int main()
{
    while(cin>>text>>pattern){
        cout<<match()<<endl;
    }
    return 0;
}

