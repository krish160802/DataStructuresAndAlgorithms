#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int out[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			int count = 0;
			for(int j=i+1;j<n;j++){
				if(arr[i]<arr[j]){
					count++;
				}
				else if(arr[i]>=arr[j]){
					continue;
				}
			}
			out[i] = count;
		}
		for(int i=0;i<n;i++){
			cout<<out[i]<<" ";
		}
		cout<<endl;
	}
}
