#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  int minimu_element = 1e6;
  for(int i = 0; i < n; i++){
    minimu_element = min(minimu_element,a[i]);
  } 
  int count = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == minimu_element){
      count++;
    }
  }
  if(count & 1){
    cout<<"Lucky\n";
    return 0;
  }
  cout<<"Unlucky\n";
  return 0;
}