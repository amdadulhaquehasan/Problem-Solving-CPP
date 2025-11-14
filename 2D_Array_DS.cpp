#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[6][6];
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      cin>>a[i][j];
    }
  }
  int ans = -1e6;
  for(int i = 1; i <= 4; i++){
    for(int j = 1; j <= 4; j++){
      int sum = a[i][j];
      sum += a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
      sum += a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
      ans = max(ans, sum);
    }
  } 
  cout<<ans<<'\n';
  return 0;
}