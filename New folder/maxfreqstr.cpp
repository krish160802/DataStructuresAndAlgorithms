#include<bits/stdc++.h>
using namespace std;
int main() {
	string st;
	cin>>st;
	sort(st.begin(),st.end());
	int mxcnt,cnt=1;
	char maxele;
	for(int i=0;i<st.length();i++){
		if(st[i]==st[i+1]){
			cnt++;
		}
		else{
			if(cnt>mxcnt){
				mxcnt=cnt;
				maxele = st[i];
			}
			cnt = 1;
		}
	}
	cout<<maxele;
	return 0;
}
