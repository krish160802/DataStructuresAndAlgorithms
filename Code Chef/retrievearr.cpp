#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		int aisum=0;
		for(int i=0;i<n;i++){
			aisum += arr[i];
		}
		
		int incmean = aisum/(n+1);
		
		for(int i=0;i<n;i++){
			cout<<arr[i]-incmean<<" ";
		}
		cout<<endl;
	}
}
