#include<iostream>
using namespace std;

int length(char s[]){
	if(s[0] == '\0'){
		return 0;
	}
	int slen = length(s+1);
	return 1 + slen;
}

int main(){
	char str[100];
	cin>>str;
	
	int len = length(str);
	cout<<len<<endl;
}
