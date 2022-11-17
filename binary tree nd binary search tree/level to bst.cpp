#include <bits/stdc++.h>
using namespace std;

struct treenode {
    int data;
    struct treenode *left, *right;
};

treenode* newtreenode(int data){
	treenode* node = new treenode();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

treenode* bst(treenode* root,int data){
	if(root == NULL){
		root = newtreenode(data);
		return root;
	}
	if(data <= root->data){
		root->left = bst(root->left,data);
	}
	else{
		root->right = bst(root->right,data);
	}
	return root;
}

treenode* constbst(int arr[],int n){
	if(n==0){
		return NULL;
	}
	treenode *root = NULL;
	for(int i = 0;i<n;i++){
		root = bst(root,arr[i]);
	}
	return root;
}

void inorder(treenode* treenode){
	if(treenode == NULL){
		return;
	}
	inorder(treenode->left);
	cout<<treenode->data<<" ";
	inorder(treenode->right);
}


int main(){
	int arr[] = {7,4,12,3,6,8,1,5,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	treenode *root = constbst(arr,n);
	
	inorder(root);
}
