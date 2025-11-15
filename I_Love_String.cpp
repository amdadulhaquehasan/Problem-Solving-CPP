#include<bits/stdc++.h>
using namespace std;

const int N = 105;
char s[N],t[N];

int main()
{
  int n;
  cin>>n;
  while(n--){
    cin>>s>>t;
    int len1 = strlen(s);
    int len2 = strlen(t);
    for(int i = 0; i< max(len1, len2); i++){
      if(i < len1){
        cout<<s[i];
      }
      if(i < len2){
        cout<<t[i];
      }
    }
    cout<<'\n';
  }
  return 0;
}