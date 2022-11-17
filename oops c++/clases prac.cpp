#include<bits/stdc++.h>
using namespace std;

class cal{
	public:
		int n1,n2,a1,a2,a3,a4;
	
	void add(int n1,int n2);
	void prod(int n1,int n2);
	void dif(int n1,int n2);
	void div(int n1,int n2);
	
	void print(){
		cout<<a1<<endl;
		cout<<a2<<endl;
		cout<<a3<<endl;
		cout<<a4<<endl;
	}
		
};

void cal :: add(int n1,int n2){
	a1 = n1 + n2;
}
void cal :: prod(int n1,int n2){
	a2 = n1*n2;
}
void cal :: dif(int n1,int n2){
	a3 = n1-n2;
}
void cal :: div(int n1,int n2){
	a4 = n1/n2;
}


int main(){
	cal op1;
	op1.add(5,2);
	op1.prod(10,2);
	op1.dif(7,6);
	op1.div(50,5);
	op1.print();
}
