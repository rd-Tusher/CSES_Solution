#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
      int n; cin>>n;
      if(n==1){
            cout<<"1\n0"<<endl;
            return 0;
      }
      vector<string>v;
      v.push_back("0");
      v.push_back("1");
      for(int i = 2; i<=n ; i++){
            int lb = pow(2,i);
            vector<string>temp;
            for(auto ch:v){
                  temp.push_back(ch);
            }
            reverse(v.begin(),v.end());
            for(auto ch:v){
                  temp.push_back(ch);
            }
            v.erase(v.begin(),v.end());
            for(int j = 0;j<pow(2,i);j++){
                  string str="";
                  str = temp[j];
                  if(j>(lb/2-1)){
                        str+='1';
                  }
                  else{
                        str+='0';
                  }
             
                  v.push_back(str);
            }
      }
      for(auto ch : v){
            reverse(ch.begin(),ch.end());
            cout<<ch<<endl;
      }
}