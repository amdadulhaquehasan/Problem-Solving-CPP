#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+7;
char s[N];

int main() {
    int a;
    cin>>a;
    for(int i = 1; i <= a; i++){
      for(int j = 1; j <= i; j++){
        cout<<"*";
      }
      cout<<'\n';
    }
    return 0;
}

