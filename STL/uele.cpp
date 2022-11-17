#include<iostream>
using namespace std;

void uele(int arr[],int n){
	int count;
	for(int i = 0;i<n;i++){
		count = 0;
		for(int j=0;j<n;j++){
			if(arr[j] == arr[i]){
				count++;
			}
		}
		if(count == 1){
			cout<<arr[i];
		}	
	}
	
}
int main(){
	int arr[] = {1,7,1,3,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	uele(arr,n);
}
