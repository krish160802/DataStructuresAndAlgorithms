#include<bits/stdc++.h>
using namespace std;

int kaden(vector<int> v,int n){
	int fans = INT_MIN;
	int u = 0;
	for(int i = 0;i<n;i++){
		u += v[i];
		if(u>fans){
			fans = u;
		}
		if(u<0){
			u=0;
		}
	}
	return fans;
}

int main(){
	int row,col;
	cin>>row>>col;
	vector<vector<int> >arr(row,vector<int>(col));
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	
	int fans = INT_MIN;
	for(int i=0;i<row;i++){
		vector<int>ans(col);
		for(int j=i;j<row;j++){
			for(int c=0;c<col;c++){
				ans[c] += arr[j][c];
			}
			fans = max(fans,kaden(ans,col));
		}
	}
	cout<<fans<<endl;
}
