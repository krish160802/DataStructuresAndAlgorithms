#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int ccnntt=0;
		cin>>n;
		int arr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		for(int i=0;i<n;i++){
			if(arr[i]==0){
				ccnntt++;
			}
		}
		
		if((n-ccnntt)%2==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
