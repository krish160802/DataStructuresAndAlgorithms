/*------------------------------------------------------------------------------
-	differnt algos:															   -
-		->greedy															   -	
-		->floyd															   	   -
-		->kuruskal												       	       -
-		->prims																   -
-		->dijkistras                                                           -
-		->knapsack 													           -
-		->kaidens     														   -
--------------------------------------------------------------------------------*/
// DIJKSTRA's //

#include<bits/stdc++.h>
#include<climits>
using namespace std;

int findmin(int* dis,bool* vis,int n){
	int minvtx = -1;
	for(int i=0;i<n;i++){
		if(!vis[i] &&(minvtx == -1 || dis[i]<dis[minvtx])){
			minvtx = i;
		}
	}
	return minvtx;
}

void dijkstra(int** edg,int n){
	int* dis = new int[n];
	bool* vis = new bool[n];
	
	for(int i=0;i<n;i++){
		dis[i] = INT_MAX;
		vis[i] = false;
	}
	dis[0] = 0;
	for(int i = 0;i<n-1;i++){
		int minvtx = findmin(dis,vis,n);
		vis[minvtx] = true;
		for(int j = 0;j<n;j++){
			if(edg[minvtx][j] != 0 && !vis[j]){
				int distance = dis[minvtx] + edg[minvtx][j];
				if(distance <  dis[j]){
				dis[j] = distance;
				}
			}
		}
	}
	for(int i = 0;i<n;i++){
		cout<<i<<" - "<<dis[i]<<endl; 
	}
	delete []vis;
	delete []dis;
}

int main(){
	int n,e;
	cin>>n>>e;
	
	int** edg = new int*[n];
	for(int i = 0;i<n;i++){
		edg[i] = new int[n];
		for(int j = 0;j<n;j++){
			edg[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++){
		int f,s,wt;
		cin>>f>>s>>wt;
		edg[f][s] = wt;
		edg[s][f] = wt;
	}
	cout<<endl;
	dijkstra(edg,n);
}
