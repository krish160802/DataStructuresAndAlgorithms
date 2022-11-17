#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
	int i,j,key;
	for(int i = 1; i<n; i++){
		key = arr[i];
		for(j=i-1; j>=0 && arr[j]>key; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = key;
	}
}
void printing(int arr[],int n){
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]= {2,4,1,6,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	printing(arr,n);
}
