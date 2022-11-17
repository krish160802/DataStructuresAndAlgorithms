#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[5] = {1,1,2,2,3};
	
	int mcnt = 0;
	int cnt = 1;
	int mele = 0;
	
	for(int i=0;i<5;i++){
		if(arr[i]==arr[i+1]){
			cnt++;
		}
		else{
			cnt = 1;
		}
		if(cnt>mcnt){
			mcnt = cnt;
			mele = arr[i];
		}
	}
	if(mcnt>(5/2)){
		cout<<mele;
	}
	else{
		cout<<-1;
	}
	
}
