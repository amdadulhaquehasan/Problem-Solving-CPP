#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  int sum = 0;
  for(auto i: s){
    sum = sum + (i-'0');
  }
  cout<<sum<<'\n';
  return 0;
}