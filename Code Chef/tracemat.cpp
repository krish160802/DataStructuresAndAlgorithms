#include<bits/stdc++.h>
using namespace std;

int LTR(int** mat,int n){
	int ans1 = 0;
	for(int i=0;i<n;i++){
		int sum1 = 0;
		int sum2 = 0;
		int r = i;
		int c = 0;
		while(r<n && c<n){
			sum1 = sum1 + mat[r][c];
			sum2 = sum2 + mat[c][r];
			r++;
			c++;
		}
		ans1 = max(ans1,(max(sum1,sum2)));
	}
	return ans1;
}

int RTL(int** mat,int n){
	int ans2 = 0;
	for(int i=0;i<n;i++){
		int sum1 = 0;
		int sum2 = 0;
		int r = i;
		int c = n-1;
		while(r<n && c>=0){
			sum1 = sum1 + mat[r][c];
			sum2 = sum2 + mat[r-i][c-i];
			r++;
			c--;
		}
		ans2 = max(ans2,(max(sum1,sum2)));
	}
	return ans2;
}
int main(){
	int n;
	cin>>n;
	
	int** mat = new int*[n];
	for(int i = 0; i<n; i++){
		mat[i] = new int[n];
		for(int j = 0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	
	int mx1 = LTR(mat,n);
	int mx2 = RTL(mat,n);
	cout<<max(mx1,mx2);
	
}








//	for(int i=0,j=0;i<n,j<n;i++,j++){
//		sum1 = sum1 + mat[i][j];
//	}
//	for(int i=0,j=n-1;i<n,j>=0;i++,j--){
//		sum2 = sum2 + mat[i][j];
//	}
//	int max1 = sum1;
//	int max2 = sum2;
//	cout<<max1<<" "<<max2;
