#include<bits/stdc++.h>
using namespace std;

void maze(int sr,int sc,int dr,int dc,string ans,vector<string> &output){

	if(sr>dr || sc>dc){
		return;
	}
	if(sr==dr && sc==dc){
		output.push_back(ans);
		return;
	}
	maze(sr+1,sc,dr,dc,ans + "V",output);
	maze(sr,sc+1,dr,dc,ans + "H",output);
	maze(sr+1,sc+1,dr,dc,ans + "D",output);
}
int main() {
	int n,m;
	cin>>n;
	cin>>m;
	string ans = "";
	vector<string>output;

	maze(0,0,n-1,m-1,ans,output);
	for(auto i:output){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<output.size();
	return 0;
}
