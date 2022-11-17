#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1;
	    cin>>y1;
	    cin>>x2;
	    cin>>y2;
	    
	    if((x1&&y1&&x2&&y2<=8) && (x1&&y1&&x2&&y2>=1)){
	    	if(x1==x2 && (y2-y1==2 || y2-y1==4 || y2-y1==-2 || y2-y1==-4)){
	    		cout<<"YES"<<endl;
			}
			else if(y1==y2 && (x2-x1==2 || x2-x1==4 || x2-x1==-2 || x2-x1==-4)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}

