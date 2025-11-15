#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  string p;
  cin>>s;
  p = s;
  reverse(s.begin(),s.end());
  if(p==s){
    cout<<"YES\n";
    return 0;
  }
  cout<<"NO\n";
  return 0;
}