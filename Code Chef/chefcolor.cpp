#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    string s = "";
	    map<string,int>mp;
	    for(int i=0;i<n;i++){
	        mp[s + str[i]]++;
	    }
	    int m=0;
	    for(auto& i: mp){
	    	m=i.second;
	    	if(m%2!=0){
	    		cout<<"NO"<<endl;
	    		break;
			}
		}
		if(m%2==0){
			cout<<"YES"<<endl;
		}
	}
	return 0;
}

