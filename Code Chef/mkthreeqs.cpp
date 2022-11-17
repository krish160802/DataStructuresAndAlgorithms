#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int arr[3];
		for(int i=0;i<3;i++){
			cin>>arr[i];
		}
		sort(arr,arr+3);
		
		if(arr[0]==arr[1] && arr[1]==arr[2] && arr[0]==arr[2]){
			cout<<"NO"<<endl;
		}
		else if(arr[0]==arr[1] && arr[1]!=arr[2]){
			cout<<"NO"<<endl;
		}
		else if(arr[0]!=arr[1] && arr[1]==arr[2]){
			if(arr[2]-arr[0]==1 || arr[2]-arr[0]==2 || arr[2]-arr[0]==3 || arr[2]-arr[0]==4 ||arr[2]-arr[0]==5 || arr[2]-arr[0]==6 || arr[2]-arr[0]==7){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			if(arr[2]-arr[1]==1 || arr[2]-arr[1]==2 || arr[2]-arr[1]==3){
				if(arr[2]-arr[0]==1 || arr[2]-arr[0]==2 || arr[2]-arr[0]==3 || arr[2]-arr[0]==4 ||arr[2]-arr[0]==5 || arr[2]-arr[0]==6 || arr[2]-arr[0]==7){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}
