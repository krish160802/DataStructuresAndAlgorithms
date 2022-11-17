#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<string,string> >vct(n);
		map<string,int>mp;
		
		for(int i=0;i<n;i++){
			cin>>vct[i].first>>vct[i].second;
			mp[vct[i].first]++;
		}
		
		for(int i=0;i<n;i++){
			if(mp[vct[i].first]==1){
				cout<<vct[i].first<<endl;
			}
			else{
				cout<<vct[i].first<<" "<<vct[i].second<<endl;
			}
		}
		
	}
}
