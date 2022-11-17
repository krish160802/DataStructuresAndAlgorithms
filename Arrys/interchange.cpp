#include<iostream>
#include<algorithm>
using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void interchange(int arr1[],int arr2[],int n,int m){
	int i,j;
	for(i = 0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr1[i]>arr2[j]){
				swap(&arr1[i],&arr2[j]);
			}
		}
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
}
void printing(int arr1[],int arr2[],int n,int m){
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	for(int j=0;j<m;j++){
		cout<<arr2[j]<<" ";
	}
}
int main(){
	int arr1[] = {1,4,6};
	int arr2[] = {2,3};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	interchange(arr1,arr2,n,m);
	printing(arr1,arr2,n,m);
	return 0;
	
}
