#include<iostream>
 
using namespace std;
 
void speedUp(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
}
 
int main(){
 speedUp(); 
    
    int n; 
    cin>>n; 
    if(n==2 || n==3){
        cout<<"NO SOLUTION\n";
    }
    else if(n==1){
        cout<<n;
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
    
   
   
}