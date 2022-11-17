#include<bits/stdc++.h>
using namespace std;

int blncbts(int h){
	if(h == 0 || h == 1){
		return 1;
	}
	
	int m = pow(10,9) + 7;
	int x = blncbts(h-1);
	int y = blncbts(h-2);
	
	long cnvt1 = (long)x*x;
	long cnvt2 = (long)x*y*2;
	
	int ans1 = (int)(cnvt1 % m);
	int ans2 = (int)(cnvt2 % m);
	
	int ans = (ans1 +ans2)%m;
	return ans;
}

int main(){
	int h;
	cin>>h;
	blncbts(h);
	cout<<blncbts(h)<<endl;
}
