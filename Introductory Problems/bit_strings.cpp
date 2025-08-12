#include <iostream>
using namespace std ; 
 
int modpow( int x, int n, int m ){
    if(n==0){
        return 1%m;
    }
   long long unsigned int k = modpow(x,n/2,m); 
    k = (k*k)%m; 
    if(n%2==1){
        k = (k*x)%m;
    }
    
    return k;
}
int main(){
    int x =2,n,m = 1e9+7; 
    cin>>n; 
    cout<<modpow(x,n,m);
}