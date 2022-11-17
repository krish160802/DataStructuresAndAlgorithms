#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void moveele(int arr[],int n){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n-1;j++){
			if(arr[j+1]>=0 && arr[j]<0){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void printing(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {-13,-2,1,0,-3,6,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	moveele(arr,n);
	printing(arr,n);
}
