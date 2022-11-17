#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,m,z;
	cin>>n>>i;
	m = ~(1<<i);
	z = n & m;
	cout<<z<<endl;
	
}
