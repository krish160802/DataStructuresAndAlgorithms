#include <bits/stdc++.h>
using namespace std;


int stair(int n, int dp[])
{
	int a=0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 1;
	if(dp[n] != -1 ){
		return dp[n] ;
	}
	int one=stair(n - 1, dp);
	int two=stair(n - 2, dp);
	int three=stair(n-3,dp);
	
	if(one<two && one<three){
	    a=1;
	}
	else if(two<one && two<three){
	    a=2;
	}
	else{
	    a=3;
	}
	if(a==1){
	    dp[n]=min(two,three)+1;
	}
		else if(a==2){
	    dp[n]=min(one,three)+1;
	}
	else{
	    
	    dp[n]=min(one,two)+1;
	
	}

	return dp[n] ;
	
	delete[] dp;
}


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dp[n+1];
		memset(dp, -1, sizeof dp) ;
		cout<<stair(n, dp)<<endl;
	}
	return 0;
	
}
