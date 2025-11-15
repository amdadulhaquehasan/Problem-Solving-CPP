#include<bits/stdc++.h>
using namespace std;

const int N = 105;
char s[N],t[N];

int main()
{
  int n;
  cin>>n;
  long long result = 1LL * (n+1)*n/2;
  long long sum = 0;
  for(int i = 1; i < n; i++){
    int a;
    cin>>a;
    sum+=a;
  }
  long long ans = result -sum;
  cout<<ans<<'\n';
  return 0;
}