#include<iostream>
using namespace std;
int main(){
	int n,z,count;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	for(int i = 0;i<n;i++){
		z = arr[i] & (1<<0);
		if(z != 0){
			count++;
		}
	}
	cout<<count<<endl;
}
