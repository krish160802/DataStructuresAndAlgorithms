#include <bits/stdc++.h>
using namespace std;

int bitonic(int arr[],int n){
	int inc[n];
	for(int i = 0;i<n;i++){
		inc[i] = 1;
	}
	for(int i = 1; i<n; i++){
		for(int j = 0;j<i;j++){
			if((arr[i]>arr[j]) && (inc[i]<inc[j] + 1)){
				inc[i] = inc[j]+1;
			}
		}
	}
	
	int dec[n];
	for(int i = 0;i<n;i++){
		dec[i] = 1;
	}
	for(int i = n-2; i>=0; i--){
		for(int j = n-1;j>i;j--){
			if((arr[i]>arr[j]) && (dec[i]<dec[j] + 1)){
				dec[i] = dec[j]+1;
			}
		}
	}
	
	int max = inc[0] + dec[0] - 1;
    for(int i=1;i<n;i++)
    {
        if(inc[i] + dec[i] - 1 > max)
        {
            max = inc[i] + dec[i] - 1;
        }
    }
    return max;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<bitonic(arr,n)<<endl;

}
