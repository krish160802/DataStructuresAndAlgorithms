#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int tt,na;
	    cin>>tt;
	    cin>>na;
	    if(na>tt){
	        cout<<0<<endl;
	    }
	    int sol = ceil(tt/5) - ceil(na/5);
	    
	    cout<<sol<<endl;
	}
	return 0;
}
