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
int multmodulo(int a,int m){
	triplet ans = extgcd(a,m);
	return ans.x;
}
int main(){
	int a,m;
	cin>>a>>m;
	int ans = multmodulo(a,m);
	cout<<ans<<endl;
}
