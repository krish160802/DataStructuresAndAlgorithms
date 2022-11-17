#include<bits/stdc++.h>
using namespace std;
int numrotate(int arr[],int n){
	int min = arr[0],pos = 0;
	for(int i = 1;i<n;i++){
		if(arr[i]<min){
			pos = i;
			min = arr[i];
		}
	}
	return pos;
}
int main(){
	int arr[] ={13,18,21,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<numrotate(arr,n)<<endl;
}
