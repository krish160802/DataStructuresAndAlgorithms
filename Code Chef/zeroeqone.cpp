#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==0){
			string zerone;
			for(int i=1;i<=n/2;i++){
				if(i%2!=0){
					zerone += '0';
				}
				else{
					zerone += '1';
				}
			}
			string fin;
			fin += zerone;
			reverse(fin.begin(), fin.end());
			fin += zerone;
			cout<<fin<<endl;
		}
		else{
			string zerone;
			for(int i=1;i<=n;i++){
				if(i%2!=0){
					zerone += '0';
				}
				else{
					zerone += '1';
				}
			}
			cout<<zerone<<endl;
		}
	}
	
}
