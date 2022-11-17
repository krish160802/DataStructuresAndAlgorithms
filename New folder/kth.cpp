#include<bits/stdc++.h>
using namespace std;


int main(){
	
	long long n,k;
	long long ans = 0;
	cin>>n;
	cin>>k;
	long long s =2;
	long long e =sqrt(n);
	
	if(k==1){
		cout<<n<<endl;
	}
	else{
		
		while(s<=e){
			long long m = (s+e)/2;
			long long prod = pow(m,k);
			if(prod>n){
				e = m-1;
			}
			else if(prod<=n){
				ans = m;
				s = m+1;
			}
		}
		cout<<ans<<endl;
	}
}
