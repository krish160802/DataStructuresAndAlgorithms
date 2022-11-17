#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while (t--){
    int n,x;
    cin>>n>>x;
    if (x<n){
        cout<<-1<<endl;
        return 0;
    }
    int dif;
    if((x-n)%2==0){
    	dif = x-n;
    	cout<<dif<<" ";
	}
	else{
		dif = x-n+1;
		cout<<dif<<" ";
	}
    
    for (int i=n;i>=1;i--){
    	if (i!= dif){
            cout<<i<<" ";
        }
    }
    cout<<endl;
     
 }
 return 0;
}
