//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int t;
//	cin>>t;
//	
//	while(t--){
//	    int n;
//	    cin>>n;
//	    string str;
//	    cin>>str;
//	    string s = "";
//	    map<string,int>mp;
//	    
//	    for(int i=0;i<n;i++){
//	        mp[s + str[i]]++;
//	    }
//	    
//	    int m=0;
//	    int k=0;
//	    for(auto& i: mp){
//	    	m=i.second;
//	    	if(m%2!=0){
//	    		cout<<"NO"<<endl;
//	    		k=1;
//	    		break;
//			}
//		}
//		
//		if(k == 0 && m%2==0){
//			cout<<"YES"<<endl;
//		}
//	}
//	return 0;
//}
#include <bits/stdc++.h>

using namespace std;

int main()
{ 
  int t;
  cin>>t;
  while(t--)
  {
   int n;
        cin>>n;
        string s;
        cin>>s;
        string first="";
        string second="";
        for(int i=0;i<n;i++){
            if(i%2==1)
            {
               first=first+s[i];
            }
            else
            {
               second=second+s[i];
            }
        }
        sort(second.begin(),second.end());
        sort(first.begin(),first.end());
        if(first!=second)
        cout<<"NO\n";
        else
        cout<<"YES\n";
  }
  return 0;
}
