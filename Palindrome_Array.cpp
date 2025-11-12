#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5+7;
long long a[N];
long long b[N];
int main() {
  int n;
  cin>>n;
  if(n==1){
    cout<<"YES\n";
    return 0;
  }
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int j=0;
  for(int i=n-1;i>=0;--i){
    b[j] = a[i];
    j++;
  }
  bool is_ok = true;
  for(int i=0;i<n;i++){
    if(a[i] != b[i])
      is_ok=false;
  }

  if(is_ok){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
  return 0;
}
