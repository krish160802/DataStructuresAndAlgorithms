#include<bits/stdc++.h>
using namespace std;
int findex(int arr[], int n, int x, int i){
    if(n==i){
        return -1;
    }

    if(arr[i] == x){
        return i;
    }

    return findex(arr,n,x,i+1);
    
}

int main(){
    int arr[] = {9,10,8,8};
    int x = 8;
    int n = 4;

    cout<<findex(arr,n,x,0);
}
