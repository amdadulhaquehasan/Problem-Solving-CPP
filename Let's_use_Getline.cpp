#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  for( auto i : s){
    if(i == '\\'){
      break;
    }
    cout<<i;
  }
  cout<<'\n';
  return 0;
}