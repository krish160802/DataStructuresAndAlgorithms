#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int l=0;
	int r=1;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(r!=n){
	
		if(arr[l]<0 && arr[r]<0){
			l=l+2;
			r=r+2;
		}
		else if(arr[l]>=0 && arr[r]<0){
			int lst =arr[l];
			for(int j=l;j<=r;j++){
				arr[j] = arr[j+1];
			}
			arr[r] = lst;
			l++;
			r++;
		}
		else if(arr[l]>=0 && arr[r]>=0){                    // 2 4 -1 3 -2 // --> //-1 2 4 3 -2 //--> -//1 -2 2 4 3 //
			r++;                                                
		}                       						    	
		else if(arr[l]<0 && arr[r]>=0){
			l++;
			r++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	
}
