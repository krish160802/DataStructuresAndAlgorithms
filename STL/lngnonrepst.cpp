#include<bits/stdc++.h>
using namespace std;
int main(){
	string st;
	cin>>st;
	int n = st.length();
	vector <int> vis(256,-1);
	int l=0;
	int mxm = 0;                                          // d v d f //
	for(int i=0;i<n;i++){
		if(vis[st[i]] != -1){
			l = max(l,vis[st[i]]+1);
		}
		
		vis[st[i]] = i;
		
		mxm = max(i-l+1,mxm);
	} 
	cout<<mxm; 
}
