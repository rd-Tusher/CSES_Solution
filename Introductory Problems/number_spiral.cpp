#include<iostream>
using namespace std; 
 
 
int main(){
    
    int t; 
    cin>>t; 
    while(t--){
        long long int x,y,ans=0;
        cin>>x>>y; 
        
        if(x==y){
            ans = (x*x)-(x-1);
        }
        else if(x>y){
            if(x%2==0){
                ans = (x-1)*(x-1)+x+(x-y);
            }
            else{
                ans = (x-1)*(x-1)+y;
            }
        }
        else{
            if(y%2==1){
                ans = (y-1)*(y-1)+y+(y-x);
            }
            else{
                ans = (y-1)*(y-1)+x;
            }
        }
        cout <<ans<<endl;
    }
    
    
    
}