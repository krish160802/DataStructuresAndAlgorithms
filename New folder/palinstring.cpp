#include <bits/stdc++.h>
using namespace std;

int main(){
	string st,revst;
	cin>>st;
//	string revst = "";
//	
//	for(int i=st.length()-1;i>=0;i--){
//		revst = st[i] + revst;
//	}
//	if(st == revst){
//		cout<<"true"<<endl;
//	}
//	else{
//		cout<<"false"<<endl;
//	}
	int pos = 0;
	for(int i=st.length()-1;i>=0;i--){
		revst[pos] = st[i];
		pos++;
	}
	int count = 0;
	for(int i=0;i<st.length();i++){
		if(revst[i] != st[i]){
			count++;
		}
	}
	if(count == 0){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
}
