#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<bool> vp(n,1);
	vp[0]=vp[1]=false;
	int count = 0;
	
	for(int i=2;i*i<n;i++){
		if(vp[i]==true){
			for(int j=2*i;j<n;j = j+i){
				vp[j] = false;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		if(vp[i]==true){
			count++;
		}
	}
	cout<<count;
	
	
}
