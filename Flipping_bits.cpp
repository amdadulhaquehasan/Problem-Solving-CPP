#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    unsigned int a;
    cin>>a;
    unsigned int ans = 0;
    for(int k = 0; k < 32; k++){
      if((a >> k) & 1){

      } 
      else{
        ans += (1 << k);
      }
    }
    cout<<ans<<'\n';
  }
  return 0;
}