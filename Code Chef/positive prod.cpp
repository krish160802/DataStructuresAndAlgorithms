#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		int cnt1 = 0;
		int cnt2 = 0;
		for(int i=0;i<n;i++){
			if(arr[i]>0){
				cnt1++;
			}
			else if(arr[i]==0){
				continue;
			}
			else{
				cnt2++;
			}
		}
		
		int s1 = ((cnt1)*(cnt1-1))/2;
		int s2 = ((cnt2)*(cnt2-1))/2;
		int ans = s1+s2;
		cout<<ans;
	}
}
