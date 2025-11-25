#include<bits/stdc++.h>
using namespace std;

int count_on_bits(int a){
  int count = 0;
  for(int  i = 0; i < 10; i++){
    if((a >> i) & 1){
      count++;
    }
  }
  return count;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
      ans += count_on_bits(i);
    }
    cout<<ans<<'\n';
  }
  return 0;
}