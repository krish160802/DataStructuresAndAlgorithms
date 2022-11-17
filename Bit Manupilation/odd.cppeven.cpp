#include<iostream>
using namespace std;
int main(){
	int n,z;
	cin>>n;
	z = n & (1<<0);
	if(z == 0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
}
