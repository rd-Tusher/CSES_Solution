#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
	string s; cin>>s;
	if(s.length()==1) {
		cout<<s<<endl;
		return 0;
	}
	map<char, int>m;
	char ch;
	for( char ch : s){
		m[ch]++;
	}
	int odd=0;
	string midd_char="";
	for(auto p:m){
		if(p.second%2==1){
			odd++;
			if(odd>1){
				cout<<"NO SOLUTION"<<endl;
				return 0;
			}
			midd_char= p.first;
 
		}
	}
	string ans="";
	for(auto p:m){
		for(int i=0;i<p.second/2;i++){
			ans+=p.first;
		}
	}
	string rev_ans = ans;
    reverse(rev_ans.begin(), rev_ans.end());
    cout << ans << midd_char << rev_ans << endl;
	
}