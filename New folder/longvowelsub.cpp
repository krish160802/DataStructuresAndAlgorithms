#include<bits/stdc++.h>
using namespace std;

bool gdstr(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		return true;
	}
	else{
	    return false;
	}
}

int main() {
	string st;
	cin>>st;

	int count = 0;
	int mxcnt = 0;
	for(int i=0;i<st.length();i++){
		if(gdstr(st[i])){
			count++;
		}
		else{
			mxcnt = max(mxcnt,count);
			count = 0;
		}
	}
	cout<<max(mxcnt,count)<<endl;

	return 0;
}
