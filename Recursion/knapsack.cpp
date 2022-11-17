#include <bits/stdc++.h>
using namespace std;

int dp[1000][10000];
int knapSack(int W, int wt[], int val[], int n)
{
  
    if (n == 0 || W == 0){
    	return 0;
	}
	if(dp[n][W]>0){
		return dp[n][W];
	}
    int ans;
    if (wt[n - 1] > W){
    ans = knapSack(W, wt, val, n - 1);
	}
        
    else{
    	
    	ans= max(val[n - 1]+ knapSack(W - wt[n - 1],wt, val, n - 1),knapSack(W, wt, val, n - 1));
	}																								
	dp[n][n]=ans;
	return ans;
}

int main()
{
    int val[] = {60,90,150,180};
    int wt[] = {10,20,30,40};
    int W = 60;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
