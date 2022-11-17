#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n;
	int arr[n];
	int fin[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cin>>x;

	while(x--){
		int q;
		cin>>q;
		for(int i=0;i<q;i++){
			fin[i] = arr[i] + arr[n-q+i]; 
		}
		for(int i=q;i<n;i++){
			fin[i] = arr[i-q] + arr[i];
		}
		for(int i=0;i<n;i++){
		    arr[i] = fin[i];
		}
	}
	
	int sumt = 0;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
		sumt = sumt + arr[i];
	}
	cout<<sumt<<endl;
	return 0;
}
