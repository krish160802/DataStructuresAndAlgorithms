#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,w;
	cin>>n>>w;
	pair<int,int> * arr = new pair<int,int>[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	
	sort(arr,arr+n);
	int *** dp = new int ** [2];
	for(int i=0;i<2;i++){
		dp[i] = new int * [n+1];
		for(int j=0;j<=n;j++){
			dp[i][j] = new int [w+1];
			for(int k=0;k<=w;k++){
				dp[i][j][k] = 0;
			}
		}
	}
	
	int primes[] = {1,2,3,5,7,11,13,17,19,23,29};
	
	for(int i =1;i<=n;i++){
		for(int j=1;j<=w;j++){
			dp[0][i][j] = dp[0][i-1][j];
			
			if(j>=arr[i-1].second){
				dp[0][i][j] = max(dp[0][i][j],dp[0][i-1][j-arr[i].second] + arr[i-1].first);
		}	}
	}
	
	for(int prime = 1;prime<=10;prime){
		int p = prime%2;
		for(int i=1;i<=n;i++){
			for(int j =1;j<=w;j++){
				dp[p][i][j] = dp[p][i-1][j];
				if(j>=arr[i-1].second){
					dp[p][i][j] = max(dp[p][i][j],max(dp[p][i-1][j-arr[i-1].second] + arr[i-1].first,dp[p^1][i-1][j-arr[i-1].second] + arr[i-1].first * primes[prime]));
					
				}
			}
		}
	}
	
	cout<<dp[0][n][w]<<endl;
}
