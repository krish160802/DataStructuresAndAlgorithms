#include<bits/stdc++.h>
using namespace std;
int sieve(int n){
	bool prim[n+1];
	for(int i=0;i<=n;i++){
		prim[i] = true;
	}
	prim[0] = false;
	prim[1] = false;
	for(int i=2;i*i<=n;i++){
		if(prim[i] == true){
			for(int j=i*i;j<=n;j+=i){
				prim[j] = false;  
			}
		}
	}
	int cnt = 0;
	for(int i=0;i<=n;i++){
		if(prim[i] == true){
			cnt++;
		}
	} 
	return cnt;
}
int main(){
	int n;
	cin>>n;
	cout<<sieve(n);
}
