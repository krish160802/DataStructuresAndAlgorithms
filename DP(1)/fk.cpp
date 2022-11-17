#include<iostream>
using namespace std;
void uele(int arr[],int n){
	sort(arr,arr+n);
	cout<<arr[2];
}
int main(){
	int arr[] = {1,7,1,3,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	uele(arr,n);
}
