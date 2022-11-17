#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,k;
		cin>>x;
		cin>>y;
		cin>>k;
		int p = (x+y)/k;
		if(p%2==0){
			cout<<"Chef"<<endl;
		}
		else{
			cout<<"Paja"<<endl;
		}
	}
} 
