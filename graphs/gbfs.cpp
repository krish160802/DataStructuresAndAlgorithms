#include<iostream>
#include<queue>
using namespace std;

void prntbfs(int** edg,int n,int strt,bool* vis){
	queue<int> pvrt;
	pvrt.push(strt);
	vis[strt] = true;
	while(!pvrt.empty()){
		int cvrt = pvrt.front();
		pvrt.pop();
		cout<<cvrt<<endl;
		for(int i=0;i<n;i++){
			if(i == cvrt){
				continue;
			}
			if(edg[cvrt][i] == 1 && !vis[i]){
				pvrt.push(i);
				vis[i] = true;
			}
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
	prntbfs(edg,n,0,vis);
}
