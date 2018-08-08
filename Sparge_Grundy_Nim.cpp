#include<bits/stdc++.h>
using namespace std;
int Grundy[1005];
int pile[100005];
int calculateMex(unordered_set<int> Set)
{
    int Mex = 0;
    while(Set.find(Mex)!=Set.end()) Mex++;
    return Mex;
}

int calculateGrundy(int n)
{
    //cout<<n<<' ';

    Grundy[0] = 0;
    Grundy[1] = 1;
    Grundy[2] = 2;
    Grundy[3] = 3;

    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    /*
        Above all are base case for moving 1 upto 3
    */
    unordered_set<int> Set;

    if(Grundy[n] != -1) return Grundy[n];

    for(int i=1;i<=3;i++){
        Set.insert(calculateGrundy(n-i));
    }

    Grundy[n] = calculateMex(Set);

    //cout<<n<<" = g = "<<Grundy[n]<<endl;

    return Grundy[n];
}


int main()
{
    memset(Grundy,-1,sizeof(Grundy));


    Grundy[5] = calculateGrundy(5);

    

    int n;
    cin>>n;
    int Xor=0;
    for(int i=0;i<n;i++){
        cin>>pile[i];
        //cout<<Grundy[pile[i]]<<endl;
        Xor = Xor ^ Grundy[pile[i]];
    }
    
    if(Xor>0) cout<<"1st Player"<<endl;
    else cout<<"2nd Player"<<endl;

    return 0;

}