#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		map<int,int>m;
		int ans = INT_MAX;
		int j=0;
		for(int i=0;i<n;i++){
			m[v[i]]++;
			while(m[v[i]]>1){
				m[v[j]]--;
				j++;
			}
			ans = min(ans,2*min(j,n-i-1) + max(j,n-i-1));
		}
		cout<<ans<<endl;
	}
}
