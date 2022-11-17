#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {0,8,9,10,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	int maxm=INT_MIN;
	int mpos; 
	for(int i=0;i<n;i++){
		if(arr[i]>maxm){
			maxm = arr[i];
			mpos = i;
		}
	}
	cout<<mpos;
}
