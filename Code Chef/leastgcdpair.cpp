#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a<b){
		return gcd(b,a);
	}
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int chck(int a,int b,int x,int y){
	if(x>=a && y<=b && gcd(x,y)){
		return 1;
	}
	else{
		return 0;
	}
}
void solve(int a,int b){
	if(chck(a,b,a,a+2)){
		cout<<a<<" "<<a+2<<endl;
		return;
	}
	if(chck(a,b,a+1,a+3)){
		cout<<a+1<<" "<<a+3<<endl;
		return;
	}
	if(chck(a,b,a,a+3)){
		cout<<a<<" "<<a+3<<endl;
		return;
	}
	cout<<-1<<endl;
}

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	solve(a,b);
}
