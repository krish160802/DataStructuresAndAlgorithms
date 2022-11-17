#include <bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;

struct itm{
	int val;
	int wt;
};
double fracsnap(int W,itm arr[],int n){
	vector<pair<double,int> >v;
	for(int i=0;i<n;i++){
		double x = (arr[i].val*1.0)/(arr[i].wt*1.0);
		v.push_back({x,i});
	}
	sort(v.begin(),v.end(),greater<pair<int,double> >());
	int sum = 0;
	int ans = 0;
	for(int i=0;i<v.size();i++){
		if(sum+arr[v[i].second].wt<W){
			ans += arr[v[i].second].val;
			sum += arr[v[i].second].wt;
		}
		else{
			double j = (W-sum)*1.0;
			ans += (j*v[i].first);
			break;
		}
	}
	return ans;
}
int main(){
	int n;
	int W;
	cin>>n;
	cin>>W;
	itm *arr = new itm[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].val>>arr[i].wt;
	}
	cout<<fracsnap(W,arr,n)<<endl;
}
