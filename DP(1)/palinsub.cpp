#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

bool chkpalin(string s,int i,int j){
	if(i>j){
		return 1;
	}
	
	if(dp[i][j] != -1){
		return dp[i][j];
	}
	
	if(s[i] != s[j]){
		return dp[i][j] = 0;
	}
	
	return dp[i][j] = chkpalin(s,i+1,j-1);
}

int main(){
	string st;
	cin>>st;
	int n = st.length();
	
	memset(dp,-1,sizeof(dp));
	int count = 1;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(chkpalin(st,i,j)){
				count++;
			}
		}
	}
	
	cout<<count;
	
}
