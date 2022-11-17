#include <bits/stdc++.h>
using namespace std;

int dp[105][1 << 12];

int touches(int pos,int mask,vector<string>&v){
	
	if((mask & (mask-1)) == 0){
		return 0;
	}
	if(pos<0){
		return 1000;
	}
	if(dp[pos][mask]){
		return dp[pos][mask];
	}
	
	int newmask1 = 0;
	int newmask2 = 0;
	int toch = 0;
	
	for(int i = 0;i<v.size();i++){
		if(mask&(1<<i)){
			toch++;
			if(v[i][pos] == '0'){
				newmask1 |= (1<<i);
			}
			else{
				newmask2 |= (1<<i);
			}
		}
	}
	
	int ans1 = touches(pos - 1, newmask1, v) + touches(pos - 1, newmask2, v) + toch;
	int ans2 = touches(pos - 1, mask, v);
	int ans = min(ans1,ans2);
	dp[pos][mask] = ans;
	return ans;
}

int solve(int n,vector<string> v){
	return touches(v[0].size()-1,(1<<n)-1,v);
}

int main(){
	int n;
	cin>>n;
	vector<string> v;
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < n; i++){
		
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    cout<<solve(n,v)<<endl;
}
