#include<bits/stdc++.h>
using namespace std;
int main() {
	string st;
	string nwst = "";
	cin>>st;

	for(int i=0;i<st.length();i++){
		int chck = int(st[i]);
		if(i%2==0){
			nwst += char(chck + 1);
		}
		else{
			nwst += char(chck - 1);
		}
	}
	cout<<nwst<<endl;

	return 0;
}
