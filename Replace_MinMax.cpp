#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  int mini = 1e6, pos_mini = -1;
  for(int i = 0; i < n; i++){
    if(a[i] < mini){
      mini = a[i];
      pos_mini =i;
    }
  }
  int maxi = -1e6, pos_maxi = -1;
  for(int i = 0; i < n; i++){
    if(a[i] > maxi){
      maxi = a[i];
      pos_maxi =i;
    }
  }
  swap(a[pos_mini] , a[pos_maxi]);
  for(int i = 0; i < n; i++){
    cout<<a[i]<<' ';
  }
  return 0;
}