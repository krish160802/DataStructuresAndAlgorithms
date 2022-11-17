#include<iostream>
using namespace std;
int main(){
	int n,i,m,z;
	cin>>n>>i;
	m = (1<<i)-1;
	z = n & m;
	cout<<z;
}

