#include<iostream>
#include<queue>
using namespace std;

int minedg(int** edg,int n,int strt,int des,bool* vis){
	int* dis = new int[n];
	for(int i=0;i<n;i++){
		dis[i] = 0;
	}
	queue<int> pvrt;
	dis[strt] = 0;
	pvrt.push(strt);
	vis[strt] = true;
	while(!pvrt.empty()){
		int x = pvrt.front();
		pvrt.pop();

		for(int i=0;i<n;i++){
			if(i == x){
				continue;
			}
			if(edg[x][i] == 1 && !vis[i]){
				dis[i] = dis[x] + 1;
				pvrt.push(i);
				vis[i] = true;
			}
		}
	}
	return dis[des];
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
	cout<<minedg(edg,n,1,5,vis);
}
