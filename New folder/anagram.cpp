#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	
	if(s1.length() != s2.length()){
		
		cout<<"NOT ANAGRAM";
	}
	
	else{
		
		if(s1 == s2){
			cout<<"YES ANAGRAM";
		}
		else{
			cout<<"NOT ANAGRAM";
		}
			
	}
	
	
}
