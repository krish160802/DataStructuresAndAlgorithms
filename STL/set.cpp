#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> s;
	int arr[] = {1,3,4,5,4,1};
	
	for(int i = 0; i<6;i++){
		s.insert(arr[i]);
	}
	set<int>::iterator it;
	for(it = s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	} 
	
	if(s.find(99) == s.end()){
		cout<<"no ele";
	}
	else{
		cout<<"ok found u";
	}
}
