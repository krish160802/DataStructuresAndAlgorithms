/*------------------------------------------------------------------------------
-	differnt algos:															   -
-		->greedy															   -	
-		->floyd															   	   -
-		->kruskal												       	       -
-		->prims																   -
-		->dijkistras                                                           -
-		->knapsack 													           -
-		->kaidens     														   -
--------------------------------------------------------------------------------*/
//KRUSKAL's//
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class edg{
	public:
		int src;
		int dest;
		int wt;
};

bool compare(edg e1,edg e2){
	return e1.wt<e2.wt;
}

int findp(int v,int *parent){
	if(parent[v] == v){
		return v;
	}
	
	return findp(parent[v],parent);
}

void kruskal(edg* inp,int n,int e){
	sort(inp,inp+e,compare);
	
	edg *out = new edg[n-1];
	int *parent = new int[n];
	
	for(int i=0;i<n;i++){
		parent[i] = i;
	} 
	int cnt = 0;
	int i=0;
	while(cnt != n-1){
		edg curr = inp[i];
		
		int srcparent = findp(curr.src,parent);
		int destparent = findp(curr.dest,parent); 
		
		if(srcparent != destparent){
			out[cnt] = curr;
			cnt++;
			parent[srcparent] = destparent;
		}
		i++;
	}
	
	for(int i=0;i<n-1;i++){
		if(out[i].src<out[i].dest){
			cout<<out[i].src<<" "<<out[i].dest<<" "<<out[i].wt<<endl;
		}
		else{
			cout<<out[i].dest<<" "<<out[i].src<<" "<<out[i].wt<<endl;
		}
	}
	
}

int main(){
	int n,e;
	cin>>n>>e;
	edg *inp = new edg[e];
	for(int i=0;i<n;i++){
		int s,d,w;
		cin>>s>>d>>w;
		inp[i].src = s;
		inp[i].dest = d;
		inp[i].wt = w;
	}
	
	kruskal(inp,n,e);
}
