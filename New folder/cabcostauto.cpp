#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int cost[4];
		for(int i=0;i<4;i++){
			cin>>cost[i];
		}
		int a,c;
		cin>>a;
		cin>>c;
		int au[a];
		int ca[c];
		
		int sa=0,sc=0;
		for(int i=0;i<a;i++){
			cin>>au[i];
			sa +=min(au[i]*cost[0],cost[1]); 
		}

		for(int i=0;i<c;i++){
			cin>>ca[i];
			sc +=min(ca[i]*cost[0],cost[1]); 
		}

		int ta,tc;
		ta = min(sa,cost[2]);
		tc = min(sc,cost[2]);

		int fa = min(min(ta,tc),cost[3]);
		cout<<fa<<endl;
	}
	return 0;
}
