#include <iostream>
#include <math.h>
using namespace std;
void primefac(int n){
	int factors;
	for(int i = 2; i<=(n/2); i++){
		if(n%i==0){
			factors=i;
			cout<<factors<<" ";
		}
	}
}
int main(){
	int s;
	cin>>s;
	primefac(s);
}
