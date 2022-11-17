#include<iostream>
using namespace std;
int digits(int n){
	static int count = 0;
	if(n == 0){
		return 0;
	}
	int dgs=digits(n/10);
	count++;
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<digits(n)<<endl;
}
