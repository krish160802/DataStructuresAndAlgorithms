#include<iostream>
using namespace std;
int staircase(int n){
	int *arr = new int(n+1);
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	
	for(int i = 3;i<=n;i++){
		arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
	}
	int outp = arr[n];
	delete [] arr;
	return outp;
	
}
int main(){
	int n;
	cin>>n;
	cout<<staircase(n)<<endl;
}
