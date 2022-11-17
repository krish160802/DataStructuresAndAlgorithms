#include<bits/stdc++.h>
using namespace std;

int mincost(int cost[4][4],int n,int p,int mask){
	if(p>=n){
		return 0;
	}
	
	int minm = INT_MAX;
	for(int j = 0;j<n;j++){
		if(!(mask&(1<<j))){
			int ans = mincost(cost,n,p+1,mask|(1<<j)) + cost[p][j];
			if(ans<minm){
				minm = ans;
			}
		}
	}
	return minm;
}

int main(){
	int cost[4][4] = {{10,2,6,5},{1,15,12,8},{7,8,9,3},{15,13,4,10}};
	cout<<mincost(cost,4,0,0)<<endl;
}
