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



void printarr(int arr2[],int len){

	int i;
	for( i = 0;i<len;i++){
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
}

void paths(treenode* treenode,int arr[],int plen){

	if(treenode ==NULL){
		return;
	}
	arr[plen] = treenode->data;
	plen++;

	
	if(treenode->left == NULL && treenode->right == NULL){
		printarr(arr,plen);
	}
	else{
		paths(treenode->left,arr,plen);
		paths(treenode->right,arr,plen);
	}
}
void pathsprint(treenode* treenode){
	int arr[1000];
	paths(treenode,arr,0);
}

int main(){
	struct treenode *root = newtreenode(1);
	root->left = newtreenode(2);
	root->right = newtreenode(3);
	root->left->left = newtreenode(4);
	root->left->right = newtreenode(5);
	root->right->left = newtreenode(6);
	pathsprint(root);
}
