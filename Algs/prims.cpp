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
// PRIM's //
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int findmin(int* wt,bool* vis,int n){
	int minvtx = -1;
	for(int i=0;i<n;i++){
		if(!vis[i] && (minvtx == -1 || wt[i]<wt[minvtx])){
			minvtx = i; 
		}
	}
	return minvtx;
}

void prims(int** edg,int n){
	
	int* prnt = new int[n];
	int* wt = new int[n];
	bool* vis = new bool[n];
	
	for(int i=0;i<n;i++){
		wt[i] = INT_MAX;
		vis[i] = false;
	}
	prnt[0] = -1;
	wt[0] = 0;
	
	for(int i=0;i<n;i++){
		int minvtx = findmin(wt,vis,n);
		vis[minvtx] = true;
		for(int j=0;j<n;j++){
			if(edg[minvtx][j] != 0 && !vis[j]){
				if(edg[minvtx][j]<wt[j]){
					wt[j] = edg[minvtx][j];
					prnt[j] = minvtx;
				}
			}
		}
	}
	
	for(int i=1;i<n;i++){
		if(prnt[i]<i){
			cout<<prnt[i]<<" "<<i<<" "<<wt[i]<<endl;
		}
		else{
			cout<<i<<" "<<prnt[i]<<" "<<wt[i]<<endl;
		}
	}
}

int main(){
	int n,e;
	cin>>n>>e;
	int** edg = new int*[n];
	for(int i =0;i<n;i++){
		edg[i] = new int[n];
		for(int j=0;j<n;j++){
			edg[i][j] = 0;
		}
	}
	
	for(int i=0;i<e;i++){
		int f,s,wt;
		cin>>f>>s>>wt;
		edg[f][s] = wt;
		edg[s][f] = wt;
	} 
	cout<<endl;
	prims(edg,n);
	
	for(int i =0;i<n;i++){
		delete [] edg[i];
	}
	delete []edg;
}
