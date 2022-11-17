#include<iostream>
using namespace std;

int fibn(int n){
	if(n==0 || n==1){
		return 1;
	}
	int opt1 = fibn(n-1);
	int opt2 = fibn(n-2);
	return opt1 + opt2;
	
}
int main(){
	int n;
	cin>>n;
	cout<<fibn(n)<<endl;
}
