#include <bits/stdc++.h>
using namespace std;

void strategy(vector<int>v,int n){
	for(int i=0;i<n;i++){
		if((v[i]-i-1)>2){
			cout<<"No"<<endl;
			return;
		}
	}
	
	int count = 0;
	for(int i = n-1;i>=0;i--){
		if(v[i] == i+1){
			continue;
		}
		if(i-1>=0 && v[i-1] == i+1 ){
			count++;
			swap(v[i],v[i-1]);
		}
		else if(i-2>=0 && v[i-2] == i+1 ){
			count += 2;
			v[i-2] = v[i-1];
			v[i-1] = v[i];
			v[i] = i+1;
		}
		else{
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
	cout<<count<<endl;
}

int main(){
	
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	
	strategy(v,n);
	return 0;
}
