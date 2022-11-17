#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int arr[5] = {1,2,3,4,5,6};
//	for(int i=0;i<5;i++){
//		cout<<arr[i];
//	}
//}

int main(){
	
	//num input//
	int n;
	cin>>n;
	
	//initialisation//
	int numsarr[n+1] = {0};
	numsarr[2]=1;
	
	//only odd nums marking//
	for(int i=3;i<=n;i=i+2){
		numsarr[i] = 1;
	}
	
	//then factor nd multiple markings till underoot n//
	for(int f=3;f*f<=n;f=f+2){
		if(numsarr[f]==1){
			for(int m=f*3;m<=n;m=m+(f*2)){
				numsarr[m] = 0;
			}
		}	
	}
	
	//finaly print the 1's//
	for(int i=0;i<n;i++){
		if(numsarr[i]==1){
			cout<<i<<" ";
		}
	}
}
