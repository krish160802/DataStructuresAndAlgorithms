#include<iostream>
using namespace std;

void rmv(char s[]){
	if(s[0] == '\0'){
	return;
	}
	if(s[0] != 'x'){
		rmv(s+1);
	}
	else{
		int i = 1;
		for(;s[i] != '\0';i++){
			s[i-1] = s[i];
		}
		s[i-1] = s[i];
		rmv(s); 	
	}
}

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
	rmv(str);
	cout<<str<<endl;
	len = length(str);
	cout<<len<<endl;
}
