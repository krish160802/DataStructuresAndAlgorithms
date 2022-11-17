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
	int r=m;
	int t=0;
	int b=n;
	while(l<r){
		if(l%2==0){
			for(int i=t;i<b;i++){
				cout<<arr[i][l]<<", ";
			}
			l++;
		}
		
		else{
			for(int i=b-1;i>=0;i--){
				cout<<arr[i][l]<<", ";
			}
			l++;
		}	
	}
	cout<<"END";	
}
