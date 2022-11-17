#include<iostream>
using namespace std;
int main(){
	int n,z;
	cin>>n;
	z = n & (n-1);
	if(z == 0){
		cout<<n<<" is power of 2";
	}
	else{
		cout<<"no";
	}
}

