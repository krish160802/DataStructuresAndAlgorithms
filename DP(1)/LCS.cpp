#include<bits/stdc++.h>
using namespace std;

int Lcs(char* s1,char* s2,int m,int n){	
//declaring the arrays nd size -------
	m = strlen(s1);
	n = strlen(s2);
	int** dp = new int*[m+1];
	for(int i=0;i<=m;i++){
		dp[i] = new int[n+1];
		for(int j=0;j<=n;j++){
			dp[i][j] = -1;
		}
	}
//the main logic of recursion --------
	if(m==0 || n==0){
		return 0;
	}
	
	if(dp[m][n]>-1){
		return dp[m][n];
	}
	int ans;
	if(s1[0] == s2[0]){
		ans = 1+Lcs(s1+1,s2+1,m,n);
	}
	else{
		int op1 = Lcs(s1,s2+1,m,n);
		int op2 = Lcs(s1+1,s2,m,n);
		ans = max(op1,op2);
	}
	dp[m][n] = ans;
//deleting the garbage values nd returning ans --------
	for(int i = 0;i<=m;i++){
		delete [] dp[i];
	}
	delete [] dp;
	return ans;
	
}

int main(){
	char s1[100];
	char s2[100];
	cin>>s1;
	cin>>s2;
	int m;
	int n;
	int ans = Lcs(s1,s2,m,n);
	cout<<ans<<endl;
}
