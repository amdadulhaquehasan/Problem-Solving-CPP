#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n],b[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  for(int i = 0; i < n; i++){
    cin>>b[i];
  }
  sort(a,a+n);
  sort(b,b+n);

  bool is_ok = true;
  for(int i = 0; i < n; i++){
    if(a[i] != b[i]){
      is_ok = false;
      break;
    }
  }
  if(is_ok){
    cout<<"yes\n";
    return 0;
  }
  cout<<"no\n";
  return 0;
}