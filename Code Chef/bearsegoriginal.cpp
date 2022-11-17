#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		int rflg = 0;
		int cnt=0;
		for(int i=0;i<st.size();i++){
			if(st[i]=='1' ){
				if(rflg==1){
					continue;
				}
				else{
					cnt++;
					rflg=1;
				}
			}
			else{
				rflg=0;
			}
		}
		if(cnt==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
