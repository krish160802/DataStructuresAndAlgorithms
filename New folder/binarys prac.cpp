#include<bits/stdc++.h>
using namespace std;

int binsrch(int arr[],int n,int x){
	int l=0;
	int r = n-1;
	while(l<=r){
		int mid = ((l+r)/2);
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid]>x){
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	return -1;
}

int main(){
	int n = 6;
	int arr[n] = {1,2,4,6,8,20};
	int x;
	cin>>x;
	cout<<binsrch(arr,n,x);
}
