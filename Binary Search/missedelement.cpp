#include<bits/stdc++.h>
using namespace std;

int findmiss(int arr1[],int arr2[],int x){
	if(x==1){
		return arr1[0];
	}
	if(arr1[0] != arr2[0]){
		return arr1[0];
	}
	int l = 0,h = x-1;
	while(l<h){
		int mid = (l+h)/2;
		if(arr1[mid] == arr2[mid]){
			l = mid;
		}
		else{
			h = mid;
		}
		if(l == h-1){
			break;
		}
	}
	return arr1[h];
	
}
void bigarr(int arr1[],int arr2[],int m,int n){
	if(n=m-1){
		cout<<findmiss(arr1,arr2,m);
	}
	else if(m=n-1){
		cout<<findmiss(arr2,arr1,n);
	}
	else{
		cout<<"invalid";
	}
}

int main(){
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,2,3,5};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	
	bigarr(arr1,arr2,m,n);
}
