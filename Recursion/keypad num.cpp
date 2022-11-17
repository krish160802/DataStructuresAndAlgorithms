#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
string qwrty(int val){
	unordered_map<int,string> m;
	m[0]="";
    m[1]="";
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    return m[val];
}
void keypad(int num,string str){
	if(num == 0){
		cout<<str<<endl;
		return;
	}
	string kpd = qwrty(num%10);
	for(int i = 0; i<kpd.size();i++){
		keypad(num/10,kpd[i] + str);
	}
}
void print(int num){
	keypad(num,"");
}

int main(){
	int num;
	cin>>num;
	
	print(num);
}
