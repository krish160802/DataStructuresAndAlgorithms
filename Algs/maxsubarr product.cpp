#include<bits/stdc++.h>
#include<climits>
using namespace std;

int maxsubprod(int arr[],int n){
	int currmax = arr[0];
	int currmin = arr[0];
	int maxm = arr[0];
	
	for(int i=1;i<n;i++){
		if(arr[i]>0){                                     // 4 2 -3 -2 -1 
			currmax = currmax*arr[i];
			currmin = min(currmin*arr[i],arr[i]);
		}
		else if(arr[i]==0){
			currmax = 0;
			currmin = 0;
		}
		else{
			int temp = currmax;
			currmax = max(currmin*arr[i],);
			currmin = temp*arr[i];
		}
		maxm = max(currmax,maxm);
	}
	return maxm;
}
int main(){
	int n;
	cin>>n;
	int arr[] = {-2,0,-1};
	cout<<maxsubprod(arr,n)<<endl;
}
