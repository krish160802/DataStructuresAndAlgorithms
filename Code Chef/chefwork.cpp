#include <bits/stdc++.h>
using namespace std;
int work(int arr[],int n,int k){
	
	int sum = 0;
	int cnt = 1;
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
		if(sum>k){
			cnt++;
			sum = arr[i];
		}
	}
	return cnt;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		cin>>k;
		int arr[n];
		bool flg;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>k){
				flg = true;
			}
		}
		if(flg){
			cout<<-1;
			continue;
		}

		int ans = work(arr,n,k);
		cout<<ans<<endl;
	}
}
