#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  for(auto &i : s){
    if(i == ','){
      i = ' ';
    }
    else{
      if(isupper(i)){
        i = tolower(i);
      }
      else{
        i = toupper(i);
      }
    }
  }
  cout<<s<<'\n';
  return 0;
}