#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,int> m;
	int arr[] ={1,4,5,3,1,4};
	for(int i=0;i<6;i++){
		m[arr[i]]++;
	}
	map<int,int>::iterator it;
	for(it = m.begin(); it!=m.end();it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
	cout<<endl;
	m.erase(5);
		for(it = m.begin(); it!=m.end();it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
}
