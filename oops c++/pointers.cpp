#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
//	int a = 10;
//	
//	int &b = a;
//
//	cout << a << endl;
//	cout << &a << endl;
//	cout << &b << endl;
//	b = 50;
//	cout<<b<<endl;
//	cout<<a<<endl;

//	int c = 50;
//	int* d = &c;
//	d = d+1;
//	cout <<"C ka address "<< &c << endl;
//	cout << "de ke andar ka maal "<< d << endl;
//	cout << *d << endl;
	
//	*d = 100;
//    cout << "D ki latest value  " << *d << endl;
// 	cout << "D ki latest value  " << c << endl;
//	(*d)+=1;
//	cout << *d << endl;
//	cout << c << endl;
//
	int arr[5] = {1,2,3,4,5};
	for(int i=0; i<5; i++){
		cout << arr[i] << " current element ka address " << &arr[i] << endl;
	}

	cout << &arr << endl;
	cout << &arr[1] << endl;
	cout << &(*(arr + 2)) << endl;
	cout << *arr+4<< endl;
	cout << (arr + 2) << endl;
	cout << &arr + 4<<endl;
	 cout << arr+1 << endl;


}

