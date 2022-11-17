#include<iostream>
using namespace std;
int main(){
	int n,i,z;
	cin>>n>>i;
	z = n ^ (1<<i);
	cout<<z<<endl;
}

