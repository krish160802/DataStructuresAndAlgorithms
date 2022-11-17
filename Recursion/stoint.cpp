#include<bits/stdc++.h>
using namespace std;

void stoin(string st,int i,int n){
	if(i==n){
		return;
	}
	
	int ans = (ans*10 + st[i]-'0');
	cout<<ans;
	stoin(st,i+1,n);
	
}

int main(){
	string st;
	cin>>st;
	int n = st.length();
	int i=0;
	stoin(st,i,n);
}
