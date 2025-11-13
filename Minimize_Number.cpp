#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  int count = 0;
  while(true){
    bool is_all_even = true;
    for(int i = 0; i < n; i++){
      if(a[i] & 1){
        is_all_even = false;
        break;
      }
    }

    if(is_all_even){
      for(int i = 0; i < n; i++){
        a[i]/=2;
      }
      count++;
    }
    else break;
  }
  cout<<count<<'\n';
  return 0;
}