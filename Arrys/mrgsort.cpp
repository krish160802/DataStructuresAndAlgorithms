#include<bits/stdc++.h>
using namespace std;

void mrg(int arr[],int l,int r){
	
	int m = (l+r)/2;
	vector<int> res;
	
	int i,j;
	for(i=l,j=m+1;i<=m && j<=r;){
		if(arr[i]<arr[j]){
			res.push_back(arr[i]);
			i++;
		}
		else{
			res.push_back(arr[j]);
			j++;
		}
	}
	for(i;i<=m;){
		res.push_back(arr[i]);
		i++;
	}
	for(j;j<=r;){
		res.push_back(arr[j]);
		j++;
	}
	
	int y=0;
	for(int x=l;x<=r;x++){
		arr[x] = res[y++];
	}	
	
}

void mrgso(int arr[],int l,int r){
	
	int m = (l+r)/2;
	
	if(l>=r){
		return;
	}
	mrgso(arr,l,m);
	mrgso(arr,m+1,r);
	
	mrg(arr,l,r);
}

int main(){
	int n = 7;
	int arr[n] = {7,3,2,1,4,9,8};
	
	mrgso(arr,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
