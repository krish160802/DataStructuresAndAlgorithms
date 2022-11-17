#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int x;
		cin>>x;
	 	int l,r; 
		int mindis = INT_MAX;
		int cur;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==i){
					continue;
				}
				if(arr[i] + arr[j] == x){
					cur = abs(arr[i]-arr[j]);
					if(mindis>cur){
						mindis = cur;
						l = min(arr[i],arr[j]);
						r = max(arr[i],arr[j]);
					}
					
				}
			}
		}
		cout<<"Deepak should buy roses whose prices are"<<" "<<l<<" "<<"and"<<" "<<r<<"."<<endl;
	}
	return 0;
}
