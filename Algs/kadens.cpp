
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int kaden(int arr[],int n){
	int curr=0;
	int best=0;
	for(int i=0;i<n;i++){
		curr = curr + arr[i];
		if(best<curr){
			best = curr;
		}
		if(curr<0){
			curr=0;
		}
	}
	return best;
}
int main(){
	int n;
	cin>>n;
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	cout<<kaden(arr,n)<<endl;
}
