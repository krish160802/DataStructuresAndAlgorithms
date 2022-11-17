#include <iostream>
using namespace std;

void rotate(int arr[],int d,int n){
	for(int i = 0;i<d;i++){
		int temp = arr[0];
		for(int i = 0;i<n-1;i++){
			arr[i] = arr[i+1];
		}
		arr[n-1] = temp;
	}
}
int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	rotate(arr,4,n);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
