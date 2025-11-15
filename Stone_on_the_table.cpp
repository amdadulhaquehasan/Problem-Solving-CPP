#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin>>n;
  char s[n+1];
  cin>>s;
  int ans = 0;
  int start_of_block = 0;
  while(start_of_block < n){
    int i = start_of_block;
    int end_of_block = i;
    while(i < n){
      if(s[i] == s[start_of_block]){
        end_of_block = i;
        i++;
      }
      else{
        break;
      }
    }
    int stones_in_this_block = end_of_block - start_of_block + 1;
    ans += stones_in_this_block -1;

    start_of_block = end_of_block +1;
  }
  cout<<ans<<'\n';
  return 0;
}