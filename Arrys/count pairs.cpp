#include<iostream>
using namespace std;
void cntpairs(int arr[],int n){
	int k = 6;
	int count = 0;
	for(int i = 0;i<n; i++){
		for(int j = i; j<n-i; j++){
			if(arr[i] + arr[j] == k){
				count++;
			}
		}
	}
	cout<<count<<" ";
	
}
int main(){
	int arr[] = {2,4,1,3,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cntpairs(arr,n);
	return 0;
	
}
