#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin>>str;
	string s = "";
	map<string,int>mp;
	for(int i=0;i<str.length();i++){
	    mp[s + str[i]]++;
	}
	    
	for(auto& i: mp){
	    cout<<mp[0].first;
	}
	return 0;
}

