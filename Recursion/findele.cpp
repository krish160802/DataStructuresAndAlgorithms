#include<iostream>
using namespace std;
bool find(int arr[],int n){
	static int i = 0, x = 5;
	if(n==0){
		return false;
	}
	if(arr[i]==x){
		return true;
	}
	bool lfnd = find(arr+1,n-1);
	return lfnd;
}
int main(){
	int arr[] = {4,6,7,10,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<find(arr,n);
}
