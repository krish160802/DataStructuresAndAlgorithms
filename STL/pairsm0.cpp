#include<iostream>
using namespace std;
void mpair(int arr[],int n){
	int count = 0;
	for(int i = 0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j] == 0){
				count++;
			}
		}
	}
	cout<< count;
}
int main(){
	int arr[] = {2,4,5,-2,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	mpair(arr,n);
}
