#include<bits/stdc++.h>
using namespace std;

int rotate(int arr[],int l,int h,int n){
	int mid=(l+h)/2;
	if(n==0){
		return -1;
	}
	if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
		return mid;
	}
	if(arr[mid]>arr[0]){
		return rotate(arr,mid+1,h,n);
	}
	return rotate(arr,l,mid-1,n);
}
int main(){
	int n;
	cout<<"LENGTH OF ARRAY : ";
	cin>>n;
	int arr[n];
	cout<<"ELEMENTS OF ARRAY : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"NUM OF ROT : "<<rotate(arr,0,n-1,n)<<endl;
}
