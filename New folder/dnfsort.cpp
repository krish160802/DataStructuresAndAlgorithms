#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int l=0;
	int i=0;
	int r=n-1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	while(i<=r){
		if(arr[i]==1){
			i++;
		}
		else if(arr[i]==0){
			swap(arr[i],arr[l]);
			l++;
			i++;
		}
		else{
			swap(arr[r],arr[i]);
			r--;
			
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
