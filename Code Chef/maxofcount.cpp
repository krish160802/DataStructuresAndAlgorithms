#include <bits/stdc++.h>
using namespace std;


void cntomax(int arr[],int n){
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	int mcnt = 0;
	int mnum = -1;
	for(auto i : m){
		if(mcnt<i.second){
			mnum = i.first;
			mcnt = i.second;
		}
		else if(mcnt == i.second){
		    if(mnum>i.first){
		        mnum = i.first;
		        mcnt = i.second;
		    }
		}
	}
	cout<<mnum<<" "<<mcnt<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cntomax(arr,n);
	}
	return 0;
}

