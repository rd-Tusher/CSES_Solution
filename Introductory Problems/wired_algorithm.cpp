#include<iostream>
 
using namespace std;
 
void speedUp(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
}
 
int main(){
 speedUp(); 
    
    long long int n; 
    cin>>n; 
    cout<<n;
    while(n!=1){
        if(n%2==0){
            n /=2;
        }
        else{
            n=(n*3)+1;
        }
        cout<<" "<<n;
    }
}