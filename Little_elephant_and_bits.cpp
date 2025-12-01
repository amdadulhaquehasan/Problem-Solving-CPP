#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
char s[N];
int main()
{
  cin>>s;
  int n = strlen(s);
  int first_zero = -1;
  for( int  i = 0; i < n; i++){
    if(s[i] == '0'){
      first_zero = i;
      break;
    }
  }
  if(first_zero == -1){
    for(int i = 0; i < n-1; i++){
      cout<<1;
    }
  }
  else{
    for(int i = 0; i < n; i++){
      if(i != first_zero){
        cout<<s[i];
      }
    }
  }
  return 0;
}