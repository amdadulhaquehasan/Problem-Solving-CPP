#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    unsigned int n,m;
    cin>>n>>m;
    n = n | (1u << m);
    cout<<n<<'\n';
  }
  return 0;
}