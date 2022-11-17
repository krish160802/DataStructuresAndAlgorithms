#include <bits/stdc++.h>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

long long cost_cal(vector<long long>s, long long k, long long l, long long n, long long number)
{
	long long incr = 0;
	long long decr = 0;
	for(long long i=0; i<n; i++)
	{
		if(s[i]>number)
		{
			decr += s[i] - number;
		}
		else if(s[i]<number)
		{
			incr += number - s[i];
		}
	}
	if(decr>incr)
	{
		return pow(10,18);
	}
	return (decr * k) + ((incr - decr)*l);
}
int main(){
	long long n,k,l;
	cin>>n>>k>>l;
	vector<long long>s;
	for(long long i=0; i<n; i++)
	{
		long long element;
		cin >> element;
		s.push_back(element);
	}
	
	long long minm=9999999, maxm=-1;
	for(long long i = 0;i<n;i++){
		if(s[i]<minm){
			s[i] = minm;
		}
		if(s[i]>maxm){
			s[i] = maxm;
		}
	}
	long long cost = pow(10,18);
	for(int i=minm; i<=maxm; i++)
	{
		cost = min(cost, cost_cal(s, k, l, n, i));
	}
	cout << cost;
}
