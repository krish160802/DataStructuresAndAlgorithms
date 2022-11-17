#include<iostream>
using namespace std;

//class cmp{
//	
//	int a,b,ai,bi,f,fi;
//	
//	
//	public:
//		cmp(void);
//		
//		void print(){	
//			cout<<f<<"+"<<fi<<"i"<<endl;
//		}
//		
//};
//
//cmp :: cmp(void){
//		cout<<"enter 1 num"<<endl;
//		cin>>a;                                                      
//		cin>>ai;
//		cout<<"enter 3 num"<<endl;
//		cin>>b;
//		cout<<"enter 4 num"<<endl;
//		cin>>bi;
//		
//		f = a+b;
//		fi = ai + bi;
//	
//}

//-----------------------------------------------------------------------------------------------------------------------------------------//


class arrsum{
	
	int sum = 0;
	int arr[5];
	
	public:
		arrsum(void);
		
		void prints(){
			cout<<sum;
		}
		
};


arrsum :: arrsum(void){
	
	sum=0;
	
	for(int i=0;i<5;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	
}
//-----------------------------------------------------------------------------------------------------------------------------------------//
int main(){
	arrsum c;
	c.prints();
}
