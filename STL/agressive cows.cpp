#include<bits/stdc++.h>
using namespace std;

bool chck(int cw,int arr[],int n,int dis){
	int count = 1;
	int lastpos = arr[0];
	
	for(int i = 1; i<n;i++){
		if(arr[i] - lastpos >= dis){
			lastpos = arr[i];
			count++;
		}
		if(count == cw){
			return true;
		}
	}
	return false;
}

int main(){
	int n = 5;
	int c = 3;
	
	int arr[] = {1,2,4,8,9};
	sort(arr,arr+1);  
	int st = 0;
	int end = arr[n-1] - arr[0];
	int ans = -1;
	while(st<=end){
		int mid = (st+end)/2;
		if (chck(c,arr,n,mid)){
			ans = mid;
			st = mid+1;
		}
		else{
			end = mid-1;
		}
	}
	cout<<"THE REQ GAP : "<<ans<<endl;
}
