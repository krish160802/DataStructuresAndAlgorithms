#include<bits/stdc++.h>
using namespace std;
int incpn(int arr[],int narr[],int c,int d,int n){
	for(int i=0;i<n;i++){
		if(arr[i]<=d){
			narr[i] = 0;
		}
		else{
			narr[i] = (arr[i]-d);
		}
	}
	int wcpn = 0;
	for(int i=0;i<n;i++){
		wcpn = wcpn + narr[i];
	}
	return (c + wcpn);
}
int excpn(int arr[],int n){
	int ncpn = 0;
	for(int i=0;i<n;i++){
		ncpn = ncpn + arr[i];
	}
	return ncpn;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,c,d;
	    cin>>n;
	    cin>>c;
	    cin>>d;
	    int narr[n];
	    int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int ans1 = excpn(arr,n);
		int ans2 = incpn(arr,narr,c,d,n);
		if(ans1>ans2){
			cout<<"COUPON"<<endl;
		}
		else if(ans2>=ans1){
			cout<<"NO COUPON"<<endl;
		}
	}
	return 0;
}

