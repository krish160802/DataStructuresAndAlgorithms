#include<bits/stdc++.h>
using namespace std;

bool h_path(int** edg, int n, int st, int end, bool* vis){
	vis[st] = true;
	if(edg[st][end]){
		return true;
	}
	for(int i = 0;i<n;i++){
		if(i == st){
			continue;
		}
		if(edg[st][i] == 1){
			if(vis[i]){
				continue;
			}
			else{
				bool ans = h_path(edg,n,i,end,vis);
				if(ans){
					return true;
				}
			}
		}
	}
	return false;
}

bool hpath(int** edg,int n,int st,int end){
	bool* vis = new bool[n];
	return h_path(edg,n,st,end,vis);
}

int main(){
	int n;
	int e;
	cin>>n>>e;
	int** edg = new int*[n];
	for(int i = 0; i<n; i++){
		edg[i] = new int[n];
		for(int j = 0;j<n;j++){
			edg[i][j] = 0;
		}
	}
	
	for(int i = 0; i<e; i++){
		int f,s;
		cin>>f>>s;
		edg[f][s] = 1;
		edg[s][f] = 1;
	}
	
	cout<<hpath(edg,n,1,3);
}
