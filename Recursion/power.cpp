#include<iostream>
using namespace std;
int pow(int x, int n){
	if(n==0){
		return ;
	}
	
	int spow = x * pow(x,n-1);
	return spow;
}
int main(){
	int x,n;
	cin>>x;
	cin>>n;
	cout<<pow(x,n)<<endl;
}
