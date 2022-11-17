#include<iostream>
using namespace std;
void unionn(int arr1[],int arr2[],int n,int m){
	int count1=0;
	for(int i=0;i<n;i++){
		count1++;
	}
	cout<<count1<<endl;
	int count2=0;
	for(int i=0;i<m;i++){
		count2++;
	}
	cout<<count2<<endl;
	
}
int main(){
	int arr1[]={1,2,3,4,5};
	int arr2[]={1,2,3};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	unionn(arr1,arr2,n,m);
}


int doUnion(int a[], int n, int b[], int m)
{
int arr[m+n];
int i=0;
for(i=0;i<n;i++)< code="">
{
arr[i]=a[i];
}
for (int j = i,k=0; k < m; j++,k++)
{
arr[j]=b[k];
}
int count=0;
sort(arr,arr+m+n);
for(int i=0;i<m+n;i++)< code="">
{
if(arr[i]!=arr[i+1])
{
count++;
}
}
return count;
}
