#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		map<int,int> m;
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int cnt =1;
		int maxcnt =1;
	
		for(int i=0;i<n;i++){
			m[arr[i]]++;
		}
	
		map<int,int>::iterator it;
		int s=0;
		for(it = m.begin(); it!=m.end();it++){
			if((it->second)>=(it->first)){
				s++;
			}
		}
		if(s==0){
			for(int i=0;i<n;i++){
		        if(arr[i]==arr[i+1]){
		            cnt++;
		            if(maxcnt<cnt){
		                maxcnt = cnt;
		            }
		        }
		        else{
	    	        cnt = 1;
	    	    }
	    	}
	    	cout<<maxcnt-1;
		}
		
		else{
			for(int i=0;i<n;i++){
		        if(arr[i]==arr[i+1]){
		            cnt++;
		            if(maxcnt<cnt){
		                maxcnt = cnt;
		            }
		        }
		        else{
	    	        cnt = 1;
	    	    }
	    	}
	    	cout<<maxcnt;
		}
		cout<<endl;
	}
	
}
