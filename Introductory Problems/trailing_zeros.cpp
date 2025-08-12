#include<iostream>
using namespace std;
long long int trail_zero(int n,int div = 5){
    if(n==0) return 0;
    return (n/5) + (trail_zero(n/5));
}
int main(){
    int n; cin>>n;
    long long int fct = 1;
    cout<<trail_zero(n);
}