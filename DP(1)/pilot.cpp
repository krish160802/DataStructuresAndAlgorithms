#include<bits/stdc++.h>
using namespace std;

int dp[5001][5001];

int pilot(int cct,int act,int n,vector<int>&cap,vector<int>&ass){
	if(cct+act>=n){
		return 0;
	}
	if(dp[cct][act] !=-1){
		return dp[cct][act];
	}
	int ans = INT_MAX;
	if(cct<n/2 && cct<act){
		ans = min(ans,pilot(cct+1,act,n,cap,ass) + cap[act + cct]);
	}
	if(act<n/2){
		ans = min(ans,pilot(cct,act+1,n,cap,ass) + ass[act + cct]);
	}
	dp[cct][act] = ans;
	
	return dp[cct][act];
}

int main(){
	int n;
	cin>>n;
	vector<int>cap(n);
	vector<int>ass(n);
	for(int i = 0;i<n;i++){
		cin>>cap[i]>>ass[i];
	}
	memset(dp,-1,sizeof(dp));
	cout<<pilot(0,0,n,cap,ass);
}
