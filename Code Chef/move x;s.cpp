#include<bits/stdc++.h>
using namespace std;


void rot(string &str,int n,int pos){
//	str = abxxg
//	abxgx
//	int temp = n;
	int k = str[pos];
	for(int i=pos;i<n;i++){
		str[i] = str[i+1];
	}
	str[n-1] = k; 
}

int main(){
	string str;
	cin>>str;
	int n = str.length();
	for(int i=0;i<n;i++){
		if(str[i]=='x'){
			rot(str,n--,i--);
		}
	}
	
//	abxxgh
//	1=3 pe hm aye x pe
//	rotate hoke bani ek bar
//	abxghx
//	i=4 hogya h
	
	for(int i=0;i<str.length();i++){
		cout<<str[i];
	}
	cout<<endl;
}
