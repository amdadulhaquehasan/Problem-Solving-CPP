#include<iostream>
using namespace std;

bool has_beautiful_year(int n){
	int y4=n%10;
	n=n/10;
	int y3=n%10;
	n=n/10;
	int y2=n%10;
	n=n/10;
	int y1=n%10;

	if(y1 != y2 and y1 != y3 and y1 != y4 and y2 != y3 and y2 != y4 and y3 != y4){
		return true;
	}
	return false;
}

int main(){
	int year;
	cin>>year;
	while(year++){
		if(has_beautiful_year(year)){
			cout<<year<<'\n';
			return 0;
		}
	}
	return 0;
}