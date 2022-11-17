#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		int cnt;
		int max = 0;
		if(st[0]=='1'){
			cnt = 1;
		}
		else if(st[0]=='0'){
			cnt = 0;
		}
		for(int i=1;i<st.size();i++){
			if(st[i]=='1' && st[i-1]=='1'){
				cnt++;
				if(cnt>max){
					max = cnt;
				}
			}
			
			else{
				cnt=1;
			}
		}
		if(max>=4){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
