#include<bits/stdc++.h>
using namespace std;
int Distance(string &s1,string &s2,int n,int m){
    int dp[n+1][m+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0){
                dp[i][j]=j;
            }
            else if(j==0){
                dp[i][j]=i;
            }
            else{
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    int f1=1+dp[i][j-1];
                    int f2=1+dp[i-1][j];
                    int f3=1+dp[i-1][j-1];
                    dp[i][j]=min(f1,f2);
                    dp[i][j]=min(dp[i][j],f3);
                }
            }
        }
    }
    return dp[n][m];
}
int main(){
  
    string s1,s2;
    cin>>s1>>s2;
    cout<<Distance(s1,s2,s1.size(),s2.size())<<endl;
    return 0;
}
