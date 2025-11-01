#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int result = a-b;
	double discount = (double)result/a*100;
	cout<<fixed<<setprecision(10)<<discount<<'\n';
	return 0;
}