#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string st,st1,st2;
	    st1="010";
	    st2="101";
	    cin>>st;
	    size_t found1 = st.find(st1);
	    size_t found2 = st.find(st2);
	    if(found1 != string::npos ||found2 != string::npos ){
	        cout<<"Good"<<endl;
	    }
	    else{
	        cout<<"Bad"<<endl;
	    }
	    
	}
	return 0;
}

