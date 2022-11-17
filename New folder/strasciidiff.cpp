#include<bits/stdc++.h>
using namespace std;
int main() {
	string st;
	cin>>st;
	
	int chck;
	int i;
	
	for(i=0;i<st.length()-1;i++){
		chck = int(st[i+1]-st[i]);
		cout<<st[i]<<chck;
	}
	
	cout<<st[i];

	return 0;
}
