#include<iostream>
using namespace std;
void fib(int n){
	static int i1 = 0;
	static int i2 = 1;
	static int i;
	
	if(n>0){
		i = i1 + i2;
		i1 = i2;
		i2 = i;
		cout<<i<<" ";
		fib(n-1);
	}
	
}
int main(){
	int n;
	cin>>n;
	cout<<"0 "<<"1 ";
	fib(n-2);
}
