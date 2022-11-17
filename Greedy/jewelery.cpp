#include<bits/stdc++.h>

using namespace std;
bool comp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.second != b.second){
        return a.second>b.second;
    }
    else{
        return a.first<b.first;
    }
}
int main(){
    int n,k;
    cin >>n>>k;
    pair<int,int>* jew = new pair<int,int>[n];
    for (int i = 0;i<n;i++) {
        cin>>jew[i].first>>jew[i].second;
    }
    sort(jew,jew + n,comp);
    
    multiset<int> m;
    int c;
    for(int i=0;i<k;i++){
        cin>>c;
        m.insert(c);
    }
    long ans = 0;
    for(int i=0;i<n;i++){
        if(m.empty()){
            break;
        }
        else if(m.lower_bound(jew[i].first) != m.end()){
            ans += jew[i].second;
            m.erase(m.lower_bound(jew[i].first));
        }
    }
    cout<<ans;
}
