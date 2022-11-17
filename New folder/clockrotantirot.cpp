// anticlock rotation //

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n;
//	cin>>n;
//	int arr[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cin>>arr[i][j];
//		}
//	}
//
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){     
//			cout<<arr[j][n-i-1];
//		}
//		cout<<endl;
//	}
//	return 0;
//}

// clock wise //

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){     
			cout<<arr[n-j-1][i];
		}
		cout<<endl;
	}
	return 0;
}
