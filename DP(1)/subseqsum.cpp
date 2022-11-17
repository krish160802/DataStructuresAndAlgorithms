#include<bits/stdc++.h>
using namespace std;

bool subsum(int* val, int n,int sum){
	bool dp[n+1][sum+1];
	for(int i=0;i<=sum;i++){
		dp[0][i] = false;
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = true;
	}
	for(int i = 1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			dp[i][j] = dp[i-1][j];
			
			if(j>=val[i-1]){
				dp[i][j] = dp[i][j] || dp[i-1][j-val[i-1]];
			}
		}
	}
	bool ans = dp[n][sum];
	return ans;
}

int main(){
	int val[] = {3,1,6,7,5};
	int sum = 8;
	cout<<subsum(val,5,8);
}
