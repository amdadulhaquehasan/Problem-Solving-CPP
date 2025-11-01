#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    if(s.size()==1){
    	cout<<0<<'\n';
        return 0;
    }

    int steps=0;
    while(s.size() > 1){
    	int sum =0;
    	for(auto i : s){
    		sum+=(i-'0');
    	}
    	s = to_string(sum);
    	steps++;
    }
    
    cout<<steps<<'\n';
}
