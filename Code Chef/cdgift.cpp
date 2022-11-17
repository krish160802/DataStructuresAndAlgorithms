#include<bits/stdc++.h>
using namespace std;

void gift(string str,int n){
	int x=0;
	int y=0;
	char prv = 'O';
	
	for(int i=0;i<n;i++){
		if(str[i]=='L' && prv!='T'){
			x--;
			prv = 'T';
		}
		else if(str[i]=='R' && prv!='T'){
			x++;
			prv = 'T';
		}
		else if(str[i]=='U' && prv!= 'F'){
			y++;
			prv = 'F';
		}
		else if(str[i]=='D' && prv!= 'F'){
			y--;
			prv = 'F';
		}
	}
	
	cout<<x<<" "<<y<<endl;
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		gift(str,n);
	}
} 
