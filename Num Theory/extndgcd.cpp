#include<bits/stdc++.h>
using namespace std;
class triplet{
	public:
		int x;
		int y;
		int gcd;
};
triplet extgcd(int a,int b){
	if(b==0){
		triplet ans;
		ans.gcd = a;
		ans.x = 1;
		ans.y = 0; 
		return ans;
	}
	triplet smlans = extgcd(b,a%b);
	triplet ans;
	ans.gcd = smlans.gcd;
	ans.x = smlans.y;
	ans.y = smlans.x - (a/b)*smlans.y;
	return ans;
}
int main(){
	int a,b;
	cin>>a>>b;
	triplet ans = extgcd(a,b);
	cout<<ans.gcd<<endl;
	cout<<ans.x<<endl;
	cout<<ans.y<<endl;
}
