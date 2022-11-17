#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int cn1=0;
		int cn2=0;
		cin>>n;
		long long cent = n;
		long long arr[2*n];
		for(int i=0;i<2*n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<2*n;i++){
			if(arr[i]%2==0){
				cn1++;
			}
			else{
				cn2++;
			}
		}
		if(cn1==cn2){
			cout<<0<<endl;
		}
		else{
			cout<<max(cn1,cn2)-cent<<endl;
		}
	}
}
