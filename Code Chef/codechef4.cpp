#include <iostream>
using namespace std;


int bitwor(int *arr,int n){
    int num = 0;
    for(int i=0;i<n;i++){
        num = num|arr[i];
    }
    return num;
}


int count(int n){
    int res=0;
    while(n!=0){
        res += (n%2);
        n = n/2;
    }
    return res;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans;
        ans = count(bitwor(arr,n));
        cout<<ans<<endl;
    }
	return 0;
}

