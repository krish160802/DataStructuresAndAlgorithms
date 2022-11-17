#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n = 2;
	    int arr[n],arr1[n],arr2[n];
		 
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>arr1[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>arr2[i];
		}
		sort(arr,arr+n);
		sort(arr1,arr1+n);
		sort(arr2,arr2+n);
		int count1=0;
		int count2=0;
		for(int i=0;i<n;i++){
			if(arr[i] == arr1[i]){
				count1++;
			}
			else if(arr[i] == arr2[i]){
				count2++;
			}
		}
		if(count1==2){
			cout<<1<<endl;
		}
		else if(count2==2){
			cout<<2<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}

