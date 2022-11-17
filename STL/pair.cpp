#include<iostream>
#include<utility>
using namespace std;
int main(){
	pair<int,char> p(5,'k');
	cout<<p.second;
	pair<int,char> p1;
	p1 = make_pair(7,'d');
	cout<<p1.first;
	
}

