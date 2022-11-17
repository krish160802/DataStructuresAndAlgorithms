#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		string o;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='f'||s[i]=='r'||s[i]=='i'||s[i]=='e'||s[i]=='z'||s[i]=='a'){
				o[i] = 'g';
			}
			else{
				o[i] = 'b';
			}
		}
		int count = 1;                                 
		for(int i=0; i<s.length();i++){
			if(o[i] != o[i+1]){
				cout<<count;
				count = 1;
			}
			else if(o[i]==o[i+1]){
				count++;	
			}
		}
		cout<<endl;		
	}
}
