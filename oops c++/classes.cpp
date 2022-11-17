#include<bits/stdc++.h>
using namespace std;

class col
{
	private:
		string sal,code;
			
	public:
//	public:
//		int age,lnum;
//	
	void store(string x,string y);
	void print(){
//		cout<<"Age is : "<<age<<endl;
//		cout<<"Lucky Number is : "<<lnum<<endl;
		cout<<"Salary is : "<<sal<<endl;
		cout<<"Code is : "<<code<<endl;
	}	
};

void col :: store(string x,string y){
	sal = x;
	code = y;
//	lnum = z;
}


int main(){
	col antriksh;
//	antriksh.age = 19;
//	antriksh.lnum = 8;
	antriksh.store("aman","krish");
	antriksh.print();
}
