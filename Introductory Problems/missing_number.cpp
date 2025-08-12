#include<iostream>
using namespace std; 
void speedUp(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
}
 
int main(){
    speedUp(); 
    long long int sum=0,n,a; 
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>a;
        sum+=a;
    }
    a = (n*(n+1))/2;
    cout<<(a-sum);
}