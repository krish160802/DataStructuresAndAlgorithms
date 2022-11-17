#include<iostream>
#include<map>
#include<string>
using namespace std;
char nrptchar(string str){
	
	map<char,int> freq;
	for(int i = 0; i<str.length(); i++){
		freq[str[i]]++;
	}
	for(int i=0;i<str.length();i++){
		if(freq[str[i]] == 1){
			return str[i];
		}
	}
	return str[0];
}
int main(){
	char str[] = "aadeebc";
	cout<<nrptchar(str);
	
}
