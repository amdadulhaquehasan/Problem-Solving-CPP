#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;
  int a[n];
  for(int i =0;i<n;i++){
  	cin>>a[i];
  }
  long long sub_array_sum = -1e18;
  long long sum =0;
  for(int i=0;i<n;i++){
  	sum = max(1LL * a[i], a[i]+sum);
  	sub_array_sum = max(sub_array_sum,sum);
  }
  cout<<sub_array_sum<<'\n';
  return 0;
}
