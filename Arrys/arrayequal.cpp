#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void srt(int arr1[],int n){
	for(int i = 0;i<=n-1; i++){
		for(int j =0; j<=n-i-1; j++){
			if(arr1[j]>arr1[j+1]){
				swap(&arr1[j],&arr1[j+1]);
			}
		}
	}
}
bool areequal(int arr1[],int arr2[],int m,int n){
	if(m!=n){
		return false;
	}
	srt(arr1,m);
	srt(arr2,n);
	for(int i = 0;i<m;i++){
		if(arr1[i] != arr2[i] ){
			return false;
		}
	}
	return true;
}
int main(){
	int arr1[] = {4,1,5,8,6};
	int arr2[] = {1,5,8,4,6};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	if (areequal(arr1,arr2,m,n)) {
		cout<<"yes equal"<<" ";
	}
	else{
		cout<<"not equal"<<" ";
	}
	
}
