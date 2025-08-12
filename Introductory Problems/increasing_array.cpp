#include<iostream>
#include<vector>
using namespace std; 
 
void speedUp(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
}
 
int main(){
    speedUp();
    
    int n; 
    cin>>n; 
    
    vector<int>v(n);
    long long int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if (v[i+1]<v[i]){
            ans+=(v[i]-v[i+1]); 
            v[i+1] = v[i];
        }
    }
    
    cout<<ans;
    
    
}