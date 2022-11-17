#include<iostream>
using namespace std;

void dup(char s[]){
	if(s[0] == '\0'){
	return;
	}
	
	if(s[0] == s[1]){
		int i = 1;
		for(;s[i] != '\0';i++){
			s[i-1] = s[i];
		}
		s[i-1] = s[i];
		dup(s); 	
	}
	else{
		dup(s+1);
	}
}

int main(){
	char str[100];
	cin>>str;
	
	dup(str);
	cout<<str<<endl;
}
