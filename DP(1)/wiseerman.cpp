#include<bits/stdc++.h>
using namespace std;

int savings[105][105];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>savings[i][j];
		} 
	}
	int dp[n][m];
	for(int i = 0;i<m;i++){
		dp[0][i]=savings[0][i];
	}
	
	
	for(int i =1;i<n;i++){
		for(int j=0;j<m;j++){
			int left,str,rite;
			if(j>0){
				left = dp[i-1][j-1];
			}
			else{
				left = INT_MAX;
			}
			str = dp[i-1][j];
			if(j<m-1){
				rite = dp[i-1][j+1];
			}
			else{
				rite = INT_MAX;
			}
			dp[i][j] = savings[i][j] + min(str,min(left,rite));
		}
	}
	int ans = INT_MAX;
	for(int i= 0;i<m;i++){
		if(dp[n-1][i]<ans){
			ans = dp[n-1][i];
		}
	}
	cout<<ans<<endl;
}
