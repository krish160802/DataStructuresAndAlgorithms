#include<iostream>
#include<string>
using namespace std;

int main(){
	string s = "KRISH";
	string ss(s,2,4);
	cout<<ss<<endl;
	string sss = s.substr(1,3);
	cout<<sss<<endl;
	if(ss.compare(sss) == 0){
		cout<<"ok cool"<<endl;
	}
	else{
		cout<<"nope"<<endl;
	}
}
