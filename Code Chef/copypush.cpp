#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string sss;
		cin>>sss;
		
		if(n%2!=0){
			if(sss[n-1]!=sss[n-2]){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			int mid = (n/2);
			string s1 = sss.substr(0,mid);
			cout<<s1<<endl;
			string s2 = sss.substr(mid,n-1);
			cout<<s2<<endl;
			if(s1==s2){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		
	}
}
