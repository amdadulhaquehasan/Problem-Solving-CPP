#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin>>n;
  int a[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin>>a[i][j];
    }
  }

  int sum1 = 0;

  for(int i = 0; i < n; i++){
    sum1+=a[i][i];
  }

  int sum2 = 0;

  for(int i = 0; i < n; i++){
    sum2+=a[i][n-i-1];
  }

  int ans = abs(sum1 - sum2);
  cout<<ans<<'\n';
  return 0;
}