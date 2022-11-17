#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	int f=-1,l=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			if(f==-1){
				f=i;
			}
			l=i;
		}
		else{
			continue;
		}
	}
	if(f!=-1){
		cout<<f<<" "<<l;
	}
}
