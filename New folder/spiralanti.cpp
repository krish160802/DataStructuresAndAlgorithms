#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	cin>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int l=0;
	int r=m-1;
	int t=0;
	int b=n-1;
	while(t<b && l<r){
		for(int i=t;i<=b;i++){
			cout<<arr[i][l]<<", ";
		}
		l++;
		for(int i=l;i<=r;i++){
			cout<<arr[b][i]<<", ";
		}
		b--;
		for(int i=b;i>=t;i--){
			cout<<arr[i][r]<<", ";
		}
		r--;
		
		for(int i=r;i>=l;i--){
			cout<<arr[t][i]<<", ";
		}
		t++;
		
	}
	cout<<"END";	
}
