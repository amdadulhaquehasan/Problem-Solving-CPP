#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
      cin>>a[i];
    }
    int count = 0;
    for(int l = 0; l < n; l++){
      for(int r = l; r < n; r++){
        bool non_decreasing_array = true;
        for(int i = l; i < r; i++){
          if(a[i] > a[i+1]){
            non_decreasing_array = false;
            break;
          }
        }
        if(non_decreasing_array){
          count++;
        }
      }
    }
    cout<<count<<'\n';
  }
  return 0;
}