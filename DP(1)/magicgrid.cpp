#include<iostream>
using namespace std;

int magicgrid(int** arr,int r,int c){
	int** temp = new int*[r];
    for(int i=0;i<r;i++){
        temp[i] = new int[c]();
    }
    
    temp[r-1][c-2] = 1;
    temp[r-2][c-1] = 1;
    temp[r-1][c-1] = 1;
    
    for(int i = c-3;i>=0;i--){
    	if(arr[r-1][i+1] < 0){
    		temp[r-1][i] = temp[r-1][i+1] - arr[r-1][i+1];
		}
		else{
			temp[r-1][i] = max(1,temp[r-1][i+1] - arr[r-1][i+1]);
		}
	}
	
	for(int i = r-3;i>=0;i--){
    	if(arr[i+1][c-1] < 0){
    		temp[i][c-1] = temp[i+1][c-1] - arr[i+1][c-1];
		}
		else{
			temp[i+1][c-1] = max(1,temp[i+1][c-1] - arr[i+1][c-1]);
		}
	}
	
	for(int i=r-2;i>=0;i--){
        for(int j=c-2;j>=0;j--){
            int rt,dwn;
            if(arr[i][j+1] < 0){
                rt = temp[i][j+1] - arr[i][j+1];
            }else{
                rt = max(1,temp[i][j+1] - arr[i][j+1]);
            }
            
            if(arr[i+1][j] < 0){
                dwn = temp[i+1][j] - arr[i+1][j];
            }else{
                dwn = max(1,temp[i+1][j]  - arr[i+1][j]);
            }
            
            temp[i][j] = min(rt,dwn);
        }
    }
    
    return temp[0][0];
}

int main(){
	int r,c;
	cin>>r>>c;
	int ** arr = new int*[2];
	arr[0] = new int[3];
	arr[1] = new int[3];
	arr[0][0] = 0;
	arr[0][1] = 1;
	arr[0][2] = -3;
	arr[1][0] = 1;
	arr[1][1] = -2;
	arr[1][2] = 0;
	
	int ans = magicgrid(arr,r,c);
	cout<<ans<<endl;
	
}
