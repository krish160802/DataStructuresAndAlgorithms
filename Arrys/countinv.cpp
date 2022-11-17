#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void countinversion(int arr[],int n){
	int count = 0;
	for(int i = 0;i<n; i++){
		for(int j =i; j<n-i; j++){
			if(arr[i]>arr[j]){
				count++;
			}
		}
	}
	cout<<count<<" ";
	
}
int main(){
	int arr[] = {2,4,1,3,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	countinversion(arr,n);
	return 0;
	
}
