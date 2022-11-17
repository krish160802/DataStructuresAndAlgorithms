#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[] = {1,3,2,4,5};
	int n = 5;
	int k = 5;
	
	
	int count = 0;
	
	for(int mask = 0; mask<(1<<n); mask++){
		int sum = 0;
		for(int j=0; j<n; j++){
			
			if((mask & (1<<j))!= 0){
				sum = sum+arr[j];
			}	
		}
		if(sum == k){
			count++;
		}	 
	}
	cout<<count<<endl;
}
