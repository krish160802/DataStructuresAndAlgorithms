#include<bits/stdc++.h>
#include<climits>
using namespace std;
int calories(int *arr,int n){
	sort(arr,arr+n,greater<int>());
	int res = 0;
	for(int i=0;i<n;i++){
		int cal = arr[i] * pow(2,i);
		res = res+cal;
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int arr[] = {2,1,3};
	cout<<calories(arr,n);
}

