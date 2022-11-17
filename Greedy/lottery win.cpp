#include<bits/stdc++.h>
using namespace std;
int dig[1000];
void winlot(int n,int s){
	for(int i=n-1;i>0;i--){
		dig[i] = min(9,s-1);
		s = s-dig[i];
	}
	dig[0] = s;
	for(int i=0;i<n;i++){
		cout<<dig[i];
	}
}
int main(){
	int n,s;
	cin>>n>>s;
	winlot(n,s);
}

