#include<bits/stdc++.h>
using namespace std;

int main(){
	double n;
	cin>>n;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n-i;j++){
			cout<<"  ";	
		}
		
		for(int k=1;k<=(2*i)-1;k++){
			if(i==1 || k==1 || k==2*i-1)
				cout<<"* ";
			else{
				cout<<"  ";
			}
		}
		
		cout<<endl;
	}
	int cl = ceil(n/2);

	for(int i=cl+1;i>=1;i--){
		
		for(int k=1;k<=n-i;k++){
			cout<<"  ";
		}
		
		for(int j=0;j!=(2*i)-1;j++){
			cout<<"* ";	
		}
		
//		for(int j=1;j<=i-1;j++){
//			cout<<"* ";
//		}
		cout<<endl;
	}
}
