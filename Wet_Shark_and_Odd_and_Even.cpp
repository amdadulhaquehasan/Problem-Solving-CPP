#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  long long a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  long long sum = 0;
  long long mini = 10e9;
  for (int i = 0; i < n; ++i)
  {
    if(a[i] & 1){
      mini = min(mini, a[i]);
    }
    sum += a[i];
  }
  if(sum & 1){
    cout<<sum - mini<<'\n';
    return 0;
  }
  cout<<sum<<'\n';
  return 0;
}