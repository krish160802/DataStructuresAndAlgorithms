#include<bits/stdc++.h>
using namespace std;

class ary{
	public:
		int n; int arr[]
	void rot(int arr[],int n);
	void print(int arr[],int n){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}	
		
};

void ary :: rot(int arr[],int n){
	int x = arr[0];
	for(int i=0;i<n;i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = x;
}

int main(){
	int n;
	cin>>n;
	int arr[n]={1,2,3,4,5};
	ary rtn;
	rtn.rot(arr,n);
	rtn.print(arr,n);
	
}

//#include <bits/stdc++.h>
//using namespace std;
//
//class Employee
//{
//    int n;
//    int arr[100];
//    public:
//
//    void getdata(int val){
//    	n=val;
//	}
//    void putdata();
//};
//
//
//
//void Employee::getdata(8){
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//}
//
//void Employee::putdata(){
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//}
//
//
//int main(){
//    
//    Employee emp; 
//    int a;
//    cin>>a;
//    emp.getdata(a);
//    emp.putdata();
//    
//    return 0;
//
//}

