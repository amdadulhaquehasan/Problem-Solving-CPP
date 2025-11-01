#include<iostream>
using namespace std;

const int N = 2e5+5;
int arr[N];
int main(){
	int n;
	cin>>n;
	long long result = (long long)(n+1)*n/2;
	int sum=0;
	for(int a : arr){
		cin>>a;
		sum = sum + a;
	}
	int ans = result-sum;
	cout<<ans<<'\n';
	return 0;
}