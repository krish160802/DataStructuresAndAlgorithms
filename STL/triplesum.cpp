#include<bits/stdc++.h>
using namespace std;

bool tripsum(int arr[],int n,int sum){
	int j,k;
	sort(arr, arr + n);
	for(int i = 0;i < n-2; i++){
		j=i+1;
		k=n-1;
		while(j<k){
			if(arr[i]+arr[j]+arr[k] == sum){
				cout<<arr[i]<<arr[j]<<arr[k];
				return true;
			}
			else if(arr[i]+arr[j]+arr[k] < sum){
				j++;
			}
			else{
				k--;
			}
		}
	}
	return false;
}

int main(){
	int arr[] = {3,4,2,6,1,5};
	int sum = 9;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<tripsum(arr,n,sum);
}
