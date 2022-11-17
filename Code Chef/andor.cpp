#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,b;
		if(n%2==0){
			for(int i=(n/2),j=n/2;i<=n,j>=0;i++,j--){
				if(((i&j)+(i|j))==n){
					a=i;
					b=j;
				}
			}
		}
		else{
			for(int i=(n/2)+1,j=n/2;i<=n,j>=0;i++,j--){
				if(((i&j)+(i|j))==n){
					a=i;
					b=j;
				}
			}
		}
		cout<<a<<" "<<b<<endl;
	}
}
