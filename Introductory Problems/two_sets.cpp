#include<iostream>
#include<vector>
#define vi vector<int>
#define pb push_back
using namespace std;
 
void speedUp(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
}
 
int main(){
 speedUp(); 
    
    int n; 
    cin>>n; 
    
    long long unsigned int k,s1=0,s2=0;
    k = (n*(n+1))/2;
    
    vi v,vv;
    if(k%2==1){
        cout<<"NO\n";
    }
    else{
        for( size_t i = n ; i>=1 ; i-- ){
            if(s1<s2){
                v.pb(i);
                s1+=i;
            }
            else{
                vv.pb(i);
                s2+=i;
            }
        }
        cout<<"YES\n"; 
        cout<<v.size()<<endl; 
        for( size_t i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl<<vv.size()<<endl;
        for(size_t i=0;i<vv.size();i++){
            cout<<vv[i]<<" ";
        }
    }
   
}