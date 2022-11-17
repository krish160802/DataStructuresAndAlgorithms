#include<iostream>
using namespace std;
void minsteps(int arr[],int n){
	int count =0;
	int i = 0;
	while(i<=n){
		i = i+arr[i];
		count++;
	}
	cout<<count<<" ";
}
int main(){
	int arr[]= {1, 4, 3, 2, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	minsteps(arr,n);
}
