#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin>>s;
  cin>>t;
  cout<<s.size()<<" "<<t.size()<<'\n';
  string p = s+t;
  cout<<p<<'\n';
  cout<<t[0];
  for(int i = 1; i < s.size(); i++){
    cout<<s[i];
  }
  cout<<' ';
  cout<<s[0];
  for(int i = 1; i < t.size(); i++){
    cout<<t[i];
  }
  cout<<'\n';
  return 0;
}
