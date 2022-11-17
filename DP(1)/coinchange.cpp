#include<iostream>
using namespace std;

int coincng(int s,int* arr,int size,int outp[5][3]){
if(s == 0){
return 1;
}
if(s < 0){
return 0;
}
if(size == 0){
return 0;
}
if(outp[s][size]>0){
return outp[s][size];
}
int fst = coincng(s-arr[0],arr,size,outp);
int scnd = coincng(s,arr+1,size-1,outp);
outp[s][size] = fst + scnd;
return fst + scnd;
}

int main(){

int arr[2] = {1,2};
int outp[5][3] = {0};
cout<<coincng(4,arr,2,outp);
}
