#include<bits/stdc++.h>
using namespace std;

//odd cases only//

int main(){
	int n;
	cin>>n;
	int m=(n/2)+1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m-i;j++){
			cout<<"  ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(int i=n/2;i>=1;i--){
		for(int j=i;j<=n/2;j++){
			cout<<"  ";
		}
		for(int k=i;k<=(2*i)-1;k++){
			cout<<"* ";
		}
		for(int j=1;j<=i-1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
}
