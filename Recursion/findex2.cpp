#include<iostream>
using namespace std;
int ind(int arr[],int n, int x){
	if(n<0){
		return -1;
	}
	if(arr[n]==x){
		return n;
	}
	ind(arr,n-1,x);
}
int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 4;
	cout<<ind(arr,n,x);
}
