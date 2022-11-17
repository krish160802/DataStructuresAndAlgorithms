#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
	int count = 0;
	for(int i = 0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[i] = arr[j]){
				count++;
			}
			if(count==2){
			cout<<arr[i]<<" ";
			}
		}
		
	}
	
}
int main(){
	int arr[] = {1,1,4,2,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,n);
}
