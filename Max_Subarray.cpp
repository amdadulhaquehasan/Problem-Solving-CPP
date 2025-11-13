#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 1; i <= n; i++){
      cin>>a[i];
    }
    for(int l = 1; l <= n; l++){
      for(int r = l; r <= n; r++){
        int maximum = -1e5;
        for(int i = l; i <= r; i++){
          maximum = max(maximum , a[i]);
        }
        cout<<maximum<<' ';
      }
    }
    cout<<'\n';
  }
  return 0;
}
