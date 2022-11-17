#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selsort(int arr[], int n ){
	int mindx;
	for(int i = 0; i<n-1; i++ ){
		mindx = i;
		for(int j=i+1; j<n; j++){
			
			if(arr[j]<arr[mindx]){
				
				mindx=j;
			}
			
		}
		swap(&arr[mindx], &arr[i]);
	}
	
}

void printing(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
	

int main(){
	int arr[] = {3,1,5,8,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	selsort(arr,n); 
	printing(arr,n);
}
