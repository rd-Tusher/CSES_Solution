#include<iostream>
using namespace std;
void solve(){
    long long int n; cin>>n;;
    long long int rng = 1,cnt = 9;
 
    long long int number = 1;
    while(n > rng*cnt){
        n -= rng*cnt;
        rng++;
        cnt*=10;
        number*=10;
    }
    long long int move = n/rng;
    int index = rng;
    if(n%rng!=0){
        move++;
        index = n%rng;
 
    }
 
    for(long long int  i = 1; i<move ; i++){
        number++;
    }
    string str = to_string(number);
    cout<<str[index-1]<<endl;
}
int main(){
    int q; cin>>q;
    for(int i=0;i<q;i++){
        solve();
    }
 
}