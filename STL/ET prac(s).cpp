#include<bits/stdc++.h>
using namespace std;

void nxg(int arr[],int n){
	stack<int> st;
	vector<int> ans(n);
	
	st.push(-1);
	
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && arr[i]>=st.top()){
			st.pop();
		}
		if(st.empty()){
			ans[i] = -1;
		}
		else{
			ans[i] = st.top();
		}
		st.push(arr[i]);
	}
	
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}

vector<int> nxs(int arr[],int n){
	stack<int> s;
	vector<int>ans(n);
	
	s.push(-1);
	
	for(int i=n-1;i>=0;i--){
		while(!s.empty() && arr[s.top()]>=arr[i]){
			s.pop();
		}
		if(s.empty()){
			ans[i] = -1;
		}
		else{
			ans[i] = s.top();
		}
		s.push(i);
	}
	return ans;
}

vector<int> pvs(int arr[],int n){
	stack<int> s;
	vector<int>ans(n);
	
	s.push(-1);
	
	for(int i=0;i<n;i++){
		while(!s.empty() && arr[s.top()]>=arr[i]){
			s.pop();
		}
		if(s.empty()){
			ans[i] = -1;
		}
		else{
			ans[i] = s.top();
		}
		s.push(i);
	}
	return ans;
}

void his(int arr[],int n){
	vector<int>ns(n);
	vector<int>ps(n);
	
	ns = nxs(arr,n);
	ps = pvs(arr,n);
	
	int area = INT_MIN;
	
	for(int i=0;i<n;i++){
		int l = arr[i];
		
		if(ns[i]==-1){
			ns[i] = n;
		}
		
		int b = ns[i] - ps[i] - 1;
		
		area = max(area,l*b);
		
	}
	
	cout<<area<<endl;
}

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
//	nxg(arr,n);
	his(arr,n);

}
