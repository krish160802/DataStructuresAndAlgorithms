#include<iostream>
using namespace std;

void rplc(char s[],char c, char r){
	if(s[0] == '\0'){
	return;
	}
	if(s[0] == c){
		s[0] = r;
	}
	rplc(s+1,c,r);
}


int main(){
	char str[1000];
	cin>>str;
	char c = 'a';
	char r = 'x';
	
	rplc(str,c,r);
	cout<<str<<endl;
	return 0;
}
