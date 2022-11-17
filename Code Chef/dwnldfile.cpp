#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	cin>>k;
	int arra[n];
	int arrb[n];
	for(int i=0;i<n;i++){
		cin>>arra[i];
		cin>>arrb[i];
	}

	int total=0;
	for(int i=0;i<n;i++){
		if(arra[i]<=k){
			k = k-arra[i];
		}
		else{
			total = (arra[i]-k)*arrb[i];
			k=0;
		}
	}
	cout<<total;
	
	
}
