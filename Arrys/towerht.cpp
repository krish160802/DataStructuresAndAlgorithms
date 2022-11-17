#include<iostream>
#include<algorithm>
using namespace std;
void towerht(int arr[],int n){
	int k = 5;
	for(int i=0;i<n;i++){
		if(i<n-1){
			arr[i] = arr[i]+k;
		}
		else{
			arr[i] = arr[i]-k;
		}
	}
}
void printing(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {2,6,3,4,7,2,10,3,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	towerht(arr,n);
	sort(arr,arr+n);
	printing(arr,n);
	return 0;
	
}

