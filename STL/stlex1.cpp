#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> duplic(vector<int> &v){
	set<int> s;
	vector<int> res;
	for(int i = 0;i<6;i++){
		if(s.find(v[i]) == s.end()){
			s.insert(v[i]);
			res.push_back(v[i]);
		}
	}
	return res;
}
int main(){
	vector<int> v;
 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
	vector<int> ans = duplic(v);
	for(int i = 0; i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
}
