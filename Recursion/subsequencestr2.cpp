#include<bits/stdc++.h>
using namespace std;

void subseq2(string str,string out,vector<string> &res){
	if(str.length() == 0){
		res.push_back(out);
		return;
	}
	
	subseq2(str.substr(1),out,res);
	subseq2(str.substr(1),out + str[0],res);
	
}

int main(){
	string str;
	cin>>str;
	string out = " ";
	vector<string> res;
	subseq2(str,out,res);
	sort(res.begin(),res.end());
	
	for(auto i:res){
		cout<<i<<endl;
	}
	
}
