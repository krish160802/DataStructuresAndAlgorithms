#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	
	// yahan number reversed ka code//
	int n = num;
	int rem;
	int revnum = 0;
	while(n!=0){
		rem = n%10;
		revnum = (revnum*10) + rem;
		n= n/10;
	}
	cout<<revnum<<endl;
	// yahan cout krke dekhlio revnum ko vo reversed number hai tera//
	
	// ab yahan dono ko num or revnum ko check kr agar equal hai to hai palindrome nahin to nahi hai//
	
	if(revnum==num){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	
	
}
