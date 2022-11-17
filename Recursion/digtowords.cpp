#include<bits/stdc++.h>
using namespace std;

string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};


void con(int n){

	if(n==0){
		return;
	}
	
//	1 2 4
 	
	con(n/10);
	
	cout<<arr[n%10]<<" ";
}

int main(){
	int n;
	cin>>n;
	con(n); 
}



//int main(){
//	int n;
//	cin>>n;
//	vector<string> v = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//	vector<string> ans;
//	
//	
//// int i=0;
//	while(n!=0){
//	    int rem = 0;
//		rem = n%10;
//// 		ans[i] = v[rem];
//        ans.push_back(v[rem]);
//// 		i++;
//		n = n/10;
//	}
//	
//	reverse(ans.begin(),ans.end());
//	for(auto it:ans){
//		cout<<it<<" ";
//	}
//}

