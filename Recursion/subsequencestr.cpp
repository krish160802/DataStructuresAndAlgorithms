#include<iostream>
using namespace std;

int subseq(string str, string out[]){
	if(str.empty()){
		out[0] = " ";
		return 1;
	}
	string smlstr = str.substr(1);
	int outsize = subseq(smlstr,out);
	for(int i = 0;i<outsize;i++){
		out[i+outsize] = str[0] + out[i];
	}
	return 2*outsize;
}

int main(){
	string str;
	cin>>str;
	string* out = new string[1000];
	int count = subseq(str,out);
	for(int i = 0;i<count;i++){
		cout<<out[i]<<endl;
	}
}
