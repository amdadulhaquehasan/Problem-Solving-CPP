#include<iostream>
using namespace std;

const int M = 3e3+5;

bool is_prime[M];

bool check_prime(int n){
	if(n==1)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

bool is_almost_prime(int n){
	int prime_divisor = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			if(is_prime[i]){
				prime_divisor++;
			}
		}
	}
	if(prime_divisor == 2) return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		is_prime[i]=check_prime(i);
	}

	int count=0;
	for(int i=1;i<=n;i++){
		if(is_almost_prime(i)){
			count++;
		}
	}
	cout<<count<<'\n';
	return 0;
}