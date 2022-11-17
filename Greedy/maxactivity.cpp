#include<bits/stdc++.h>
using namespace std;
struct act{
	int st,end;
};
bool comp(act s1,act s2){
	return (s1.end<s2.end);
}
void maxact(act arr[],int n){
	
	sort(arr,arr+n,comp);
	int i=0;
	cout << "(" << arr[i].st << ", " << arr[i].end << ")"<<endl;
	for(int j=1;j<n;j++){
		if(arr[j].st >= arr[i].end){
			cout << "(" << arr[j].st << ", " << arr[j].end << ")"<<endl;
			i=j;
		}
	}
}

int main(){
	act arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
	int n = sizeof(arr)/sizeof(arr[0]);
	maxact(arr,n); 
}
