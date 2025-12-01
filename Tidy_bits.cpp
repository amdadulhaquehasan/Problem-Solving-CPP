#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int x = __builtin_popcount(n);
  cout<<((1 << x) -1) <<'\n';
  return 0;
}