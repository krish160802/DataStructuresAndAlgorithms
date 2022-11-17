#include<bits/stdc++.h>
#include<climits>
using namespace std;

int kaden(int arr[],int n){
	int curr=0;
	int best=0;
	for(int i=0;i<n;i++){
		curr = curr + arr[i];
		if(best<curr){
			best = curr;
		}
		if(curr<0){
			curr=0;
		}
	}
	return best;
}
 int maxsumsub(int arr[],int n,int k){
 	
	int kadsum = kaden(arr,n);
	if(k==1){
		return kadsum;
	}
	int curpre=0,cursuf=0;
	int maxpre=INT_MIN,maxsuf=INT_MIN;
	
	for(int i =0;i<n;i++){
		curpre = curpre + arr[i];
		maxpre = max(curpre,maxpre);
	}
	int total = curpre;
	for(int i =n-1;i>=0;i--){
		cursuf = cursuf + arr[i];
		maxsuf = max(cursuf,maxsuf);
	}
	int ans;
	if(total<0){
		ans = max(maxpre + maxsuf,kadsum);
	}
	else{
		ans = max(maxpre + maxpre + (total*(k-2)),kadsum);
	}
	return ans;  
 }

int main(){
	int n,k;
	cin>>n>>k;
	int arr[] = {1,-2,1};
	cout<<maxsumsub(arr,n,k);
}
