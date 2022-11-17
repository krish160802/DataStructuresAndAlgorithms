#include<bits/stdc++.h>
using namespace std;

int cost(string s,string t,int n){
	int count = 0;
	for(int i = 0;i<n;){
		if(s[i]!=t[i]){
			if(i+1<n && s[i]!=s[i+1] && s[i+1]!=t[i+1]){
				i = i+2;
			}
			else{
				i=i+1;
			}
			count++;
		}
		else{
			i++;
		}
	}
	return count;
}

int main(){
	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	cost(s,t,n);
	cout<<cost(s,t,n)<<endl;
}
