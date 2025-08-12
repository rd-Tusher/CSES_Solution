#include<iostream>
 
using namespace std;
 
void speedUp(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
}
 
int main(){
 speedUp(); 
    
    string s; 
    cin>>s;
    char ch = s[0];
    int ln=0,maxx=0;
    for(size_t i=0;i<s.length();){
        if(ch == s[i]){
            ln++;
            i++;
        }
        else{
            ch = s[i];
            maxx = max(maxx,ln);
            ln=0;
            
        }
        maxx = max(maxx,ln);
    }
    cout<<maxx;
   
}