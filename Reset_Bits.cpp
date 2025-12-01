#include<bits/stdc++.h>
using namespace std;

int main()
{
  unsigned int a,b;
  cin>> a >> b;
  int ans =  (a & ((1u << 31)-(1u << b)));
  cout<<ans <<'\n';
  return 0;
}