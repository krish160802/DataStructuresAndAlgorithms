#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int l[n];
		int r[n];
		for(int i=1;i<=n;i++){
			cin>>l[i];
		}
		for(int i=1;i<=n;i++){
			cin>>r[i];
		}
		int maxpos = -1;
		int maxr = -1;
	
		for(int i=1;i<=n;i++){
			if(l[i]*r[i]>maxr){
				maxr = l[i]*r[i];
				maxpos = i;
			}
			else if(l[i]*r[i] == maxr){
				if(r[i]>r[maxpos]){
					maxpos = i;
				}
				else if(r[i]==r[maxpos]){
					if(i<maxpos){
						maxpos = i;
					}
				}
			}
		}
		cout<<maxpos<<endl;
	}
}
