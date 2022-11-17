#include<bits/stdc++.h>
using namespace std;
int main() {
//	vector<int> v;
//	int a;
//	while(cin>>a){
//		v.push_back(a);
//	}
	
	int arr[1000];
	int n;
	cin>>n;
	int sm = 0;
	int pos;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sm=sm+arr[i];
		if(sm<0){
			pos = i-1;
			break;
		}
	}
	for(int i=0;i<=pos;i++){
		cout<<arr[i]<<endl;
	}
	return 0;

}

