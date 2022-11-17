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

// FLOYD's //

#include<bits/stdc++.h>
using namespace std;

#define v 4

#define INF 99999

void print(int dis[][v]){
	for(int i = 0;i<v;i++){
		for(int j = 0;j<v;j++){
			if(dis[i][j] == INF){
				cout<<"inf"<<"   ";
			}
			else{
				cout<<dis[i][j]<<"   ";
			}
		}
		cout<<endl;
	}
}
void floyd(int graph[][v]){
	int dis[v][v],i,j,k;
	
	for(int i = 0;i<v;i++){
		for(int j = 0;j<v;j++){
			dis[i][j] = graph[i][j];
		}
	}
	
	for(k=0;k<v;k++){
		for(i=0;i<v;i++){
			for(j=0;j<v;j++){
				if(dis[i][j]>dis[i][k] + dis[k][j] && (dis[i][k] != INF && dis[k][j] != INF)){
					dis[i][j] = dis[i][k] + dis[k][j];
				}
			}
		}
	}
	print(dis);
	
}

int main(){
		int graph[v][v] = {{0,5,INF,10},{INF,0,3,INF},{INF,INF,0,1},{INF,INF,INF,0}};
		floyd(graph);
		return 0;
}

