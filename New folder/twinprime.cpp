#include<bits/stdc++.h>
using namespace std;

//prime check krne ka function//
int isprime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n = 100;
	int prime[n];  
	
	// ye count variable banaya ek kyuki hume pata nahin hoga na kitni length hogi prime array ki//
	int count = 0;
	
	// 2 se 100 tak jitne prime vo check hore hai//
	for(int i=2;i<=n;i++){
	
		if(isprime(i)){
			
			// ek prime array banai hai jisme store honge sare prime number//
			prime[count] = i;
			
			// har step m jahan prime aayega array m count badha denge use dal ke agle ke lie//
			count++;
		}
	}
	
	// idhar for loop chalaya pos tak kyuki jitni count hogi utna elements add kia hoga na 
	for(int i=0;i<count;i++){
		if(prime[i+1]-prime[i] == 2){
			cout<<"("<<prime[i]<<" "<<prime[i+1]<<")"<<" ";
		}
	}
}
