#include<bits/stdc++.h>
using namespace std;

void prm(char arr[],int i){
	if(arr[i]=='\0'){
		cout<<arr<<endl;
		return;
	}
	
	for(int j=i;arr[j]!='\0';j++){
		swap(arr[i],arr[j]);
		prm(arr,i+1);
		swap(arr[i],arr[j]);
	}
}

int main(){
	char arr[] = "abc";
	prm(arr,0);
	return 0;
}
