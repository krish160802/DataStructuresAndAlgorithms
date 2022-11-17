#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
	if(n==0){
		return 0;
	}
	int ssm = sum(arr,n-1);
	return arr[n-1] + ssm;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum(arr,n);
}
