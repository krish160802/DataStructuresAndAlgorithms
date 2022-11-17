#include<bits/stdc++.h>
using namespace std;
struct job{
	int st,fin,prof;
};
bool comp(job a,job b){
	return a.fin<b.fin;
}
int maxprofit(job arr[],int n){
	sort(arr,arr+n,comp);
	int* dp = new int[n];
	dp[0] = arr[0].prof;
	for(int i=1;i<n;i++){
		int incl = arr[i].prof;
		int nonconf = -1;
		for(int j=i-1;j>=0;j--){
			if(arr[j].fin<=arr[i].st){
				nonconf = j;
				break;
			}
		}
		if(nonconf != -1){
			incl += dp[nonconf];
			dp[i] = max(incl,dp[i-1]);
		}
	} 
	int ans = dp[n-1];
	delete[] dp;
	return ans; 
}
int main(){
	job arr[] = {{2,5,50},{1,2,20},{6,9,70},{2,50,400}};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<maxprofit(arr,n);
}
