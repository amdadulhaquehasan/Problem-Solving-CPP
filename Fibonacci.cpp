#include <bits/stdc++.h>
using namespace std;

const int N = 50;
long long a[N+1];
int main() {
  int n;
  cin>>n;
  a[1] = 0;
  a[2] = 1;
  for(int i = 3; i <= n; i++){
    a[i] = a[i - 1] + a[i - 2];
  }
  cout<<a[n]<<'\n';
  return 0;
}