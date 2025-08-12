#include<iostream>
#include<set>
#include<vector>
using namespace std;
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    string ss;
    cin>>ss;
    vector<string>st;
    string sr = "";
    st.push_back(sr);
    int len = ss.size();
    for(int i = 1; i<=len; i++){
        vector<string>temp(st.begin(),st.end());
        st.clear();
        int fact = factorial(i);
        for(int ii = 0;ii<i; ii++){
            for(int j = 0; j<(fact/i); j++){
                string s = temp[j];
                s.insert(s.begin()+ii,ss[i-1]);
                st.push_back(s);
            }
        }
    }
    set<string>ans(st.begin(),st.end());
    cout<<ans.size()<<endl;
    for(string str:ans){
        cout<<str<<endl;
    }
 
}