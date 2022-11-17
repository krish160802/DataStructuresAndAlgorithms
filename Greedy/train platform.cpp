#include <bits/stdc++.h>
using namespace std;
int platform(int arr[],int dep[] ,int n){
	vector<pair<int,int> >v(n);
	for(int i=0;i<n;i++){
		v[i] = {arr[i],dep[i]}; 
	}
	sort(v.begin(),v.end());
	priority_queue<int,vector<int>,greater<int> >p;
	int cnt = 1;
	p.push(v[0].second);
	
	for(int i=1;i<n;i++){
		if(p.top() >= v[i].first){
			cnt++;
		}
		else{
			p.pop();
		}
		p.push(v[i].second);
	}
	return cnt;
}
int main(){
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<platform(arr,dep,n);
    return 0;
}
