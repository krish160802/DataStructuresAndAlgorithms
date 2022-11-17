#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		cin>>m;
		int arr1[n];
		int arr2[m];
		for(int k=0;k<n;k++){
			cin>>arr1[k];
		}
		for(int k=0;k<m;k++){
			cin>>arr2[k];
		}
		
		int i=0,j=0;
		int fin=0,sm1=0,sm2=0;
		
		while(i<n && j<m){
			if(arr1[i]>arr2[j]){
				sm2 = sm2 + arr2[j];
				j++;
			}
			else if(arr1[i]<arr2[j]){
				sm1 = sm1 + arr1[i];
				i++;
			}
			else{
				fin = max(sm1,sm2) + arr1[i];
				sm1=0;
				sm2=0;
				i++;
				j++;
			}
		}
		while(i<n){
			sm1 += arr1[i];
			i++;
		}
		while(j<m){
			sm2 += arr2[j];
			j++;
		}
		
		fin = fin + max(sm1,sm2);
		cout<<fin<<endl;
	}
}
