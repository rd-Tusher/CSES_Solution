#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int mv[n+10];
    mv[1] =0; 
    mv[2] = 6;
    mv[3] = 28;
    mv[4] = 96;
    
    for(int i = 5;i<=n;i++){
        long long int N = i*i; 
        long long int  dn = 2*i -1;
        mv[i] = dn*N - ((dn*(dn+1))/2) - 20 - (dn - 8)*4;
        mv[i]+=mv[i-1];
    }
    for(int i = 1; i<=n; i++){
        cout<<mv[i]<<endl;
    }
}