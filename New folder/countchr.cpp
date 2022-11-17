#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch[];
	cin>>ch;
	int i=0;
	int cnt = 0;
	
	while(ch[i]!='\n'){
		cnt++;
		i++;
	}
	cout<<cnt;
}
