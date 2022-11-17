#include<iostream>
#include<climits>
using namespace std;
void maxarrsum(int arr[],int n){
	int maximum=INT_MIN;
	int maxend = 0;
	for(int i=0; i<n; i++){
		maxend = maxend+arr[i];
		if(maximum<maxend){
			maximum = maxend;
		}
		if(maxend<0){
			maxend = 0;
		}
		
	}
	cout<<maximum<<" ";
}

int main(){
	int arr[] ={-2,-4,-1,-4,-2};
	int n = sizeof(arr)/sizeof(arr[0]);
	maxarrsum(arr,n);
}
