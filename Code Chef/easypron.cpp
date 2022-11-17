#include<bits/stdc++.h>
using namespace std;

int conschck(string s){
	
	for(int i=0;i<4;i++){
		
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			return 1;
		}
		else{
			return 0;
		}	
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		int n;
		cin>>n;
		string sst;
		string str = st.substr(0,4);
		int temp =	conschck(str);
		cout << temp << "\n";
		
//		for(int i=0;i<n-3;i++){
//			
//			sst = st.substr(i,4);
//			
//			if(!conschck(sst)){
//				cout<<"NO"<<endl;
//				break;
//			}
//		}
//		if (conschck(sst)){
//			cout<<"YES"<<endl;
//		}
		
	}
}
