#include<bits/stdc++.h>
using namespace std;

int singmod(int arr[],int n,int x){
	int count1 = 0;
	for(int i=0;i<n;i++){
		count1 = count1 + ceil((double)arr[i]/x);
	}
	return count1;
}

int multimod(int arr[],int n){
	int count2 = 0;
	for(int i=0;i<n;i++){
		count2 = max(count2,arr[i]);
	}
	return count2;
}

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
		int ans = min(singmod(arr,n,x),multimod(arr,n));
		cout<<ans<<endl;
	}
}
