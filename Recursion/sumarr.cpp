#include<iostream>
using namespace std;
 int sumarr(int arr[],int n){
 	static int i = 0, sum = 0;
	if(n==0){
		return sum;
	}
	sum = sum +arr[i];
	int lsm = sumarr(arr+1,n-1);
	return lsm;
}
int main(){
	int arr[] = {4,5,4,5,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sumarr(arr,n);
}
