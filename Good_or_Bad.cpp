#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    bool is_good = false;
    for(int i = 0; i < s.size(); i++){
      if(i + 2 < s.size() and s[i] == '1' and s[i+1] == '0' and s[i+2] == '1'){
        is_good = true;
      }
      if(i + 2 < s.size() and s[i] == '0' and s[i+1] == '1' and s[i+2] == '0'){
        is_good = true;
      }
    }
    if(is_good){
      cout<<"Good\n";
    }
    else{
      cout<<"Bad\n";      
    }
  }
  return 0;
}