#include<iostream>
 
using namespace std;
 
void speedUp(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
}
 
int main(){
 speedUp(); 
    
    int t; 
    cin>>t; 
    while(t--){
        int a,b; 
        cin>>a>>b; 
        int t = a; 
        a = max(a,b); 
        b = min(t,b);
        bool f = false;
        if(a<=2*b){
           if(a == 2*b){
               f = true;
           }
           else if((a+b)%3==0){
               f = true;
           }
           else if((a==b) && (a%3==0 && b%3==0)){
               f = true;
           }
           
        }
        if(f == true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
}