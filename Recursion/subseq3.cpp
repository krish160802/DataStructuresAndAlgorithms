#include<bits/stdc++.h>
using namespace std;

void subseq(string st,int n,string out,int idx){
	if(idx==n){
		return;
	}
	if(!out.empty()){
		cout<<out<<endl;
	}
	for(int i=idx;i<n;i++){
		out += st[i];
		subseq(st,n,out,i);
		out = out.erase(out.size()-1);
	}
	
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		int n = st.size();
		string out = "";
		int idx=-1;
		subseq(st,n,out,idx);
		cout<<endl;
	}
	
	return 0;
}
