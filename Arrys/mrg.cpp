#include<bits/stdc++.h>
using namespace std;

void mrg(int arr1[],int arr2[],vector<int> &res,int n,int m){
	int i,j;
	for(i=0,j=0;i<n&&j<m;){
		if(arr1[i]<arr2[j]){
			res.push_back(arr1[i]);
			i++;
		}
		else{
			res.push_back(arr2[j]);
			j++;
		}
	}
	for(i;i<n;){
		res.push_back(arr1[i]);
		i++;
	}
	for(j;j<m;){
		res.push_back(arr2[j]);
		j++;
	}	
	
}



int main(){
	int n = 3;
	int m = 4;
	int arr1[n] = {1,3,5};
	int arr2[m] = {2,4,6,8};
	vector<int> res;
	mrg(arr1,arr2,res,n,m);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	
}
