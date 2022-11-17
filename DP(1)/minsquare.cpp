#include <bits/stdc++.h>
using namespace std;

int minsq(int x){
	int dp[x+1];
	
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	
	for(int i = 4;i<=x;i++){
		dp[i] = i;
		for(int j = 1;i-(j*j)>=0;j++){
			dp[i] = min(dp[i],1+dp[i-(j*j)]);
		}
	}
	return dp[x];
}

int main(){
	int x;
	cin>>x;
	cout<<minsq(x);
}
