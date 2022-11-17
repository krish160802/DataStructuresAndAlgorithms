#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,z;
	cin>>n>>i;
	z = n & (1<<i);
	cout<<z<<endl;
	if(z==0){
		cout<<"not set";
	}
	else{
		cout<<"set";
	}
	
	
}
