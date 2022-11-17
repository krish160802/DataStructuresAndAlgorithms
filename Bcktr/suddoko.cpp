#include<iostream>
using namespace std;

#define N 9

bool emptyloc(int grid[N][N],int &rw,int &cl){
	for(int i = 0;i<N;i++){
		for(int j = 0;j<N;j++){
			if(grid[i][j] == 0){
				rw = i;
				cl = j;
				return true;
			}
		}
	}
	return false;
}

bool saferow(int grid[N][N],int rw,int num){
	for(int i = 0;i<N;i++){
		if(grid[rw][i] == num){
			return false;
		}
	}
	return true;
}
bool safecol(int grid[N][N],int cl,int num){
	for(int i = 0;i<N;i++){
		if(grid[i][cl] == num){
			return false;
		}
	}
	return true;
}
bool safegrd(int grid[N][N],int rw,int cl,int num){
	int rowfac = rw - (rw%3);
	int colfac = cl - (cl%3);
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			if(grid[i+rowfac][j+colfac] == num){
				return false;
			}
		}
	}
	return true;
}

bool safe(int grid[N][N],int rw,int cl,int i){
	if(saferow(grid,rw,i) && safecol(grid,cl,i) && safegrd(grid,rw,cl,i)){
		return true;
	}
	return false;
}


bool sudslv(int grid[N][N]){
	int rw,cl;
	if(!emptyloc(grid,rw,cl)){
		return true;
	}
		
	for(int i=1;i<=9;i++){
		if(safe(grid,rw,cl,i)){
			grid[rw][cl] = i;
			if(sudslv(grid)){
				return true;
			}
			grid[rw][cl] = 0;			
		}
	}
	return false;
}

int main(){
	int grid[N][N];
	for(int i = 0;i<N;i++){
		string s;
		cin>>s;
		for(int j = 0;j<s.length();j++){
			grid[i][j] = s[j] - '0';
		}
	}
	
	if(sudslv(grid)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
