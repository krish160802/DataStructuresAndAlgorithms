#include<bits/stdc++.h>
using namespace std;
int main() {

	string st,s1;
	cin>>st;
	for(int i=0;i<st.length();i++){
		if(st[i]>='A' && st[i]<='Z'){
			cout<<endl;
		}
		cout<<st[i];
	}
	return 0;

}
