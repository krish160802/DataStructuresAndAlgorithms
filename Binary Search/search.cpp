#include<bits/stdc++.h>
using namespace std;
int bsrch(int arr[],int n,int x){
	int l=0;
	int r=n-1;
	while(l<=r){
		int mid = ((l+r)/2);
		if(arr[mid] == x){
			return mid;
		}
		else if(x<arr[mid]){
			r = mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1; 
}
int main(){
	int arr[] = {3,4,66,78,90,100};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	cout<<bsrch(arr,n,x)<<endl; 
}
