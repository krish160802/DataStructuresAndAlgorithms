#include <bits/stdc++.h>
using namespace std;

class cstack{
	int *a;
	int top;
	int size;
	int maxcap;
	
	public:
		
		cstack(int cap){
			maxcap = cap;
			a = new int[maxcap];
			top=-1;
			size=0;
		}
		
		bool push(int x){
			if(top>maxcap){
				cout<<"stack overflow"<<endl;
				return false;
			}
			else{
				a[++top]=x;
				cout<<x<<"pushed"<<endl;
				return true;
			}
		}
		
		int pop(){
			if(top<0){
				cout<<"empty"<<endl;
				return 0;
			}
			else{
				int x = a[top--];
				return x;
			}
		}
		
		int peek(){
			if(top<0){
				cout<<"empty"<<endl;
				return false;
			}
			
			else{
				int x=a[top];
				return x;
			}
		}
};

int main(){
	cstack *nstack = new cstack(100);
	nstack->push(20);
	nstack->push(30);
	cout<<nstack->pop()<<"poped"<<endl;
	cout<<nstack->pop()<<"poped"<<endl;
//	cout<<nstack->pop()<<"poped"<<endl;
}
