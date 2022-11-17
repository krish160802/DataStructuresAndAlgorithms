#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	
	if(string(n,'1') == s){
		cout<<0<<endl;
		return 0;
	}
	int cnt = 0;
	for(int i = 0;i<n;i++){
		if(s[i] == '0' &&(i == 0 || s[i-1] == '1')){
			cnt++;
		}
	}
	cout<<"Reverse cost = "<<x<<endl;
	cout<<"Flip cost = "<<y<<endl;
	cout<<"Total cost = " <<(cnt-1)*min(x,y) + y<<endl;
	return 0;
}
