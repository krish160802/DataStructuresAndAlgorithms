#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	char st[n+1];
	for(int i=0;i<n;i++){
		cin>>st[i];
	}
	for(int i=n-1;i>=0;i--){
		cout<<st[i]<<" ";
	}
}
