#include <bits/stdc++.h>
using namespace std;

int maze[20][20], solution[20][20];

void printmaze(int n){
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++){
			cout<<solution[i][j]<<" ";
		} 
		cout<<endl;
	}
	cout<<endl;
}

void mazehlp(int n,int row,int col){
	if(row == n-1 && col == n-1){
		solution[row][col] = 1;
		printmaze(n);
		return;
	}
	if(row>=n || row<0 || col>=n || col<0 || maze[row][col] == 0 || solution[row][col] == 1){
		return;
	}
	solution[row][col] = 1;
//	mazehlp(n,row-1,col);
	mazehlp(n,row+1,col);
//	mazehlp(n,row,col-1);
	mazehlp(n,row,col+1);
	solution[row][col] = 0;
	
}
int main(){
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; ++i) {
		for(int j = 0 ; j < n ; ++j){
			cin >> maze[i][j];
		}
	}
	
	memset(solution, 0, sizeof solution);
	cout<<"All the possible sols are : "<<endl;
	mazehlp(n,0,0);
}
