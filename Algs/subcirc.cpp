//#include<bits/stdc++.h>
//using namespace std;
//
//int kaden(int arr[],int n){
//	int cur=0;
//	int best = INT_MIN;
//	for(int i=0;i<n;i++){
//		cur = cur + arr[i];
//		if(best<cur){
//			best = cur;
//		}
//		if(cur<0){
//			cur = 0;
//		}
//	}
//	return best;
//}
//
//int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	int sum = 0;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//		sum = sum+arr[i];
//	}
//	int prevkd = kaden(arr,n);
//	
//	for(int i=0;i<n;i++){
//		arr[i] = -1*arr[i];
//	}
//	int newkd = kaden(arr,n);
//	
//	int fkd = sum + newkd;
//	int ans = max(fkd,prevkd);
//	cout<<ans;
//	
//}

#include<bits/stdc++.h>
using namespace std;

int kaidens(int arr[],int n){
	int curr = 0;
	int bst = INT_MIN;

	for(int i=0;i<n;i++){
		curr = curr + arr[i];
		if(curr>bst){
			bst = curr;
		}
		if(curr<0){
			curr = 0;
		}
	}
	return bst;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int sum = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum = sum + arr[i];
		}
		int prvkd = kaidens(arr,n);

		for(int i=0;i<n;i++){
			arr[i] = -1*arr[i];
		}
		int nwkd = kaidens(arr,n);
		int finkd = sum + nwkd;

		int sol = max(finkd,prvkd);
		cout<<sol<<endl;

	}
	return 0;
}
