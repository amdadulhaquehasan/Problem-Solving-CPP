#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,l,r,x; 
  cin>>n>>l>>r>>x;
  int a[n];
  for(int i =0;i<n;i++){
  	cin>>a[i];
  }
  int count =0;
  for(int mask = 0; mask <(1<<n);mask++){
    int sum = 0, mini = INT_MAX, maxi = INT_MIN, taken =0;
    for(int i=0;i<n;i++){
      if((mask >> i) & 1){
        sum+=a[i];
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
        taken++;
      }
    }
    if(taken >=2 && sum>=l && sum<=r && (maxi-mini) >= x){
      count++;
    }
  }
  cout<<count<<'\n';
  return 0;
}
