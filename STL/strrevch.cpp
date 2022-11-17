#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int n = str.length();
	if(str[n-1]=='0'){
	
		for(int i=n-2;i>=0;i--){
			cout<<str[i];
		}
	}
	
}
