#include<bits/stdc++.h>
#include<climits>
using namespace std;
int mindif(int *arr,int n){
	sort(arr,arr+n);
	int minm = INT_MAX;
	for(int i=1;i<n;i++){
		if((arr[i]-arr[i-1])<minm){
			minm = arr[i]-arr[i-1];
		}
		
	}
	return minm;
}
int main(){
	int n;
	cin>>n;
	int arr[] = {22,9,12,5,1,3};
	cout<<mindif(arr,n);
}
