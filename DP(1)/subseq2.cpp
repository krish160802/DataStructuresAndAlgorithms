#include<bits/stdc++.h>
using namespace std;

bool subsum(int* val, int n,int sum){
	bool dp[2][sum+1];
	for(int i=0;i<=sum;i++){
		dp[0][i] = false;
	}
	dp[0][0] = true;
	
	int flag = 1;
	for(int i = 1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			dp[flag][j] = dp[flag^1][j];
			
			if(j>=val[i-1]){
				dp[flag][j] = dp[flag][j] || dp[flag^1][j-val[i-1]];
			}
		}
		flag = flag^1;
	}
	bool ans = dp[flag^1][sum];
	return ans;
}

int main(){
	int val[] = {3,1,6,7,5};
	int sum = 8;
	cout<<subsum(val,5,8);
}
