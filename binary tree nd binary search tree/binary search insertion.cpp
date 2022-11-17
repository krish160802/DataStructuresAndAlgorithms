#include <bits/stdc++.h>
using namespace std;

struct treenode {
    int data;
    struct treenode *left, *right;
    treenode(int data){
    	this->data = data;
    	this->left = NULL;
    	this->right = NULL;
	}
};

void inorder(treenode* treenode){
	if(treenode == NULL){
		return;
	}
	inorder(treenode->left);
	cout<<treenode->data<<" ";
	inorder(treenode->right);
}
struct treenode* insertion(struct treenode* root,int key){
	if(root == NULL){
		treenode *temp = new treenode(key);
		cout<<key<<endl;
		return temp;
	}
	
	if(key < root->data){
		root->left = insertion(root->left,key);
	}
	else if(key>root->data){
		root->right = insertion(root->right,key);
	}
	return root;
}

int main(){
	struct treenode *root = NULL;
	struct treenode *temp;
	root = insertion(root,25);
	insertion(root,15);
	insertion(root,50);
	insertion(root,10);
	insertion(root,22);
	insertion(root,35);
	insertion(root,70);

	inorder(root);
	
}

