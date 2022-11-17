#include <bits/stdc++.h>
using namespace std;

int profit(int rate[],int n,int k){
	int dp[k+1][n+1];
	
	for(int i = 0;i<=k;i++){
		dp[i][0] = 0;
	}
	for(int j = 0;j<=n;j++){
		dp[0][j] = 0;
	}
	
	for(int i = 1;i<=k;i++){
		int pdiff = INT_MIN;
		for(int j = 1;j<n;j++){
			pdiff = max(pdiff,dp[i-1][j-1] - rate[j-1]);
			dp[i][j] = max(dp[i][j-1],rate[j]+pdiff);
		}
	}
	return dp[k][n-1];
}

int main()
{
    int k,n;
    cin>>k>>n;
    int rate[n];
    for(int i = 0;i<n;i++){
    	cin>>rate[i];
	}
    cout << "Maximum profit : "<<profit(rate,n,k)<<endl;
    return 0;
}
