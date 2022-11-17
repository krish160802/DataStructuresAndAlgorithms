#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		string arr;
		cin>>arr;
		int count = 0;
		
		if(arr[0] == '1'){
			count++;
		}
		
		for(int i=1;i<arr.length();i++){
			if(arr[i-1] == '0' && arr[i] == '1'){
				count++;
			}
			else if(arr[i-1] == '0' && arr[i] == '0'){
				continue;
			}
			else{
				continue;
			}
		}
		
		cout<<count<<endl;		
	}
}
