#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>> n;
    unsigned int ans = 0;
    for(int k = 0; k < 32; k += 2){
      int a = (n >> k) & 1;
      int b  = (n >> (k + 1)) & 1;
      swap(a, b);
      if(a){
        ans += 1 << k;
      }
      if(b){
        ans += 1 << (k + 1);
      }
    }
    cout<<ans<<'\n';
  }
  return 0;
}