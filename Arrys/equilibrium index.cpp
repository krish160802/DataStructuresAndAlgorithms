#include<iostream>
using namespace std;
void equilibrium(int arr[],int n){
	int i,j,lefthalf,righthalf;
	bool flag = false;
	for(int i = 0; i<n;++i){
		lefthalf = 0;
		for(int j = 0; j<i; j++){
			lefthalf = lefthalf + arr[j];
		}
		int righthalf = 0;
		for(int j=i+1; j<n; j++){
			righthalf = righthalf+arr[j];
		}
		
		if(lefthalf == righthalf){
			cout<<i<<" ";
			flag = true;
		}
	}
	if (!flag){
		cout<<-1<<" ";
	}
}
int main(){
	int arr[] = {-7,1,5,0,-4,3,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	equilibrium(arr,n);
	
}
