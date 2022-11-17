#include<bits/stdc++.h>
using namespace std;
bool chckpr(int n){
	int fact = 0;
	for(int j=1;j*j<=n;j++){
		if(n%j == 0){
			if((j*j) == n){
				fact += 1;
			}
			else{
				fact += 2;
			}
		}
	}
	if(fact == 2){
		return true;
	} 
	return false;
}
int main(){
	int n;
	cin>>n;
	
	int cnt=0;
	for(int i=0;i<=n;i++){
		if(chckpr(i)){
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
