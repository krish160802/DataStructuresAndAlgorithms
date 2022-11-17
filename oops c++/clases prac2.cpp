#include<bits/stdc++.h>
using namespace std;

class arsm{
	public:
		int sum = 0;
	
	void sm(int arr[],int n);
	void print(){
		cout<<sum;
	}		
};

void arsm :: sm(int arr[],int n){
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
	}
}


int main(){
	int n;
	cin>>n;
    int arr[n] = {1,2,3,4,5};
	arsm res;
	
	res.sm(arr,n);
	res.print();
}
