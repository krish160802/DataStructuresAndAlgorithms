#include<bits/stdc++.h>
using namespace std;

int conschck(string s){
	
	for(int i=0;i<4;i++){
		
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){ 
			return 1;
		}	
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		string st;
		cin>>st;
		
		string sst;
		string str = st.substr(0,4);
		int temp;
		
		for(int i=0;i<n-3;i++){
			
			sst = st.substr(i,4);
			temp =	conschck(sst);
	
			if(temp == 0){
				cout<<"NO"<<endl;
				break;
			}
		}
		if (temp==1){
			cout<<"YES"<<endl;
		}
		
	}
}
