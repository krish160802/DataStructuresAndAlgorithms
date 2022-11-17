#include<iostream>
using namespace std;

void sumofrange(int min , int max){
	int sum = 0;
	for(int i=min; i<=max; i++){
		sum = sum+i;
	}
	cout<<sum<<" ";
	
}
int main(){
	int mn,mx;
	cin>>mn>>mx;
	sumofrange(mn,mx);
}
