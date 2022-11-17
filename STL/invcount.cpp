#include<bits/stdc++.h>
using namespace std;

int mrgsrt(int arr[], int left, int mid, int right){
	int i = left, j=mid, k=0;
	int tmp[right-left+1];
	int count = 0;
	while(i<mid && j<=right){
		if(arr[i] <= arr[j]){
			tmp[k++] = arr[i++];
		}
		else{
			tmp[k++] = arr[j++];
			count += mid-i;
		}
	}
	while(i<mid){
		tmp[k++] = arr[i++];
	}
	while(j<=right){
		tmp[k++] = arr[j++];
	}
	for(int i = left,k = 0;i<=right;i++,k++){
		arr[i] = tmp[k];
	}
	return count;
}

int inversion(int arr[],int left, int right){
	int count = 0;
	if(right > left){
		int mid = (left + right)/2;
	
		int cntleft = inversion(arr,left,mid);
		int cntrt = inversion(arr,mid+1,right);
		int cntmrg = mrgsrt(arr,left,mid+1,right);
		
		return cntleft + cntrt + cntmrg;
	}
	return count;
}

int main(){
	int arr[] = {6,3,1,4,5};
	int n = 5;
	int res = inversion(arr,0,n-1);
	cout<<res<<endl; 
}
