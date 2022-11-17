#include<iostream>
using namespace std;
int fact(int n){
	if(n==0){
		return 1;
	}
	int sfact = fact(n-1);
	return n * sfact;
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
}
