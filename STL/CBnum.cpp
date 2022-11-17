#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string st;
	cin>>st;
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string s = st.substr(i,j);
			if(s == '2'||s == '3'||s == '5'||s == '7'|| s == "11" || s == "13" ||s == "17"||s == "23"||s=="29"){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
