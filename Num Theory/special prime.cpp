#include<bits/stdc++.h>
using namespace std;

vector<int>v;

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
	
	for(int i=0;i<=n;i++){
		if(prim[i] == true){
			v.push_back(i);
		}
	} 
}

int spclprime(int n){
	sieve(n);
	int count=0;
	for(int i=0;i<v.size();i++){
		for(int j=0;j<i-1;j++){
			if(v[j] + v[j+1] + 1 == v[i]){
				count++;
				break;
			}
		}
	}
	return count;
	
}
int main(){
	int n;
	cin>>n;
	cout<<spclprime(n);
}
