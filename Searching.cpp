#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5+7;
long long a[N];
int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int x;
  cin>>x;
  for(int i=0;i<n;i++){
    if(x==a[i]){
      cout<<i<<'\n';
      return 0;
    }
  }
  cout<<-1<<'\n';
  return 0;
}
