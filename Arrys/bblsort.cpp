#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bblsrt(int arr[],int n){
	for(int i = 0;i<=n-1; i++){
		for(int j =0; j<=n-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void printing(int arr[],int n){
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {4,1,5,8,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	bblsrt(arr,n);
	printing(arr,n);
	return 0;
	
}
