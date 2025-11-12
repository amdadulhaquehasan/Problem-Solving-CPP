#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9+7;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 1; i <= n; i++){
      cin>>a[i];
    }
    int minimum_sum = inf;
    for(int i = 1; i <= n; i++){
      for(int j = i + 1; j <= n; j++){
        minimum_sum = min(minimum_sum, a[i]+a[j]+j-i);
      }
    }
    cout<<minimum_sum<<'\n';
  }
  return 0;
}
