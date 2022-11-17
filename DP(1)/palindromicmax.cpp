#include<bits/stdc++.h>
using namespace std;

string lngpalin(string st){
	
	int n = st.length();
	bool **dp = new bool *[n];
	
	for(int i=0;i<n;i++){
		dp[i] = new bool[n];
	}
	string res;
	int l;
	int mxl = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i==j){
				dp[i][j] = true;
			}
			else if(i-j==1){
				if(st[i]==st[j]){
					dp[i][j]=true;
				}
				else{
					dp[i][j]=false;
				}
			}
			else{
				if(st[i]==st[j] && dp[i-1][j+1] == true){
					dp[i][j]=true;
				}
				else{
					dp[i][j]=false;
				}
			}
			int curl = i-j+1;
			
			if(dp[i][j]==true){
				
				if(curl>mxl){
					l=j;
					mxl = curl;
				}
			}	
		}
	}
	res =  st.substr(l,mxl);              // b a b a d // 
	return res;
}

int main(){
	string st;
	cin>>st;
	
	cout<<lngpalin(st);
}
