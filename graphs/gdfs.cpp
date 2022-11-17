#include<iostream>
using namespace std;

void printing(int** edg, int n, int strt, bool* vis){
	cout<<strt<<endl;
	vis[strt] = true;
	for(int i = 0;i<n;i++){
		if(i == strt){
			continue;
		}
		if(edg[strt][i] == 1){
			if(vis[i]){
				continue;
			}
			printing(edg,n,i,vis);
		}
	}
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
	bool* vis = new bool[n];
	for(int i=0;i<n;i++){
		vis[i] = false;
	}
	printing(edg,n,1,vis);
}
