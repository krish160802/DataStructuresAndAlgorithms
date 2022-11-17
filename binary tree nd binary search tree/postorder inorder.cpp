#include <bits/stdc++.h>
using namespace std;

struct treenode{
	int data;
	struct treenode *left,*right;
};

treenode* newtreenode(int data){
	treenode* node = new treenode();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

int search(int inord[],int start,int end,int val){
	for(int i = start;i<=end;i++){
		if(inord[i] == val){
			return i;
		}
	}
}
treenode* buildf(int postord[],int inord[],int start,int end,int* pindx){
	if(start>end){
		return NULL;
	}
	treenode* cur = newtreenode(postord[*pindx]);
	(*pindx)--;
	if(start == end){
		return cur;
	}
	
	int pos = search(inord,start,end,cur->data);
	cur->right = buildf(postord,inord,pos+1,end,pindx);
	cur->left = buildf(postord,inord,start,pos-1,pindx);
	return cur;
}
void print(treenode* root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

int main(){
	int postord[] = {4,2,5,3,1};
	int inord[] = {4,2,1,5,3};
	int pindx = 4;
	treenode* root = buildf(postord,inord,0,4,&pindx);
	print(root);
	
}
