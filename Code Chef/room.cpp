#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		cin>>x;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int maxm = x;
		for(int i=0;i<n;i++){
			x = x + arr[i];
			if(x>maxm){
				maxm = x;
			}	
		}
		cout<<maxm<<endl;
	}
}
