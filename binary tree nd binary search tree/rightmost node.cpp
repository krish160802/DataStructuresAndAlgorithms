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
void rightmost(treenode* treenode){
	if(treenode == NULL){
		return;
	}
	
	if(treenode->right == NULL){
		if(treenode->left == NULL){
			cout<<treenode->data<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	else{
		rightmost(treenode->right);
	}
}

int main(){
	struct treenode *root = newtreenode(1);
	root->left = newtreenode(2);
	root->right = newtreenode(3);
	root->left->left = newtreenode(4);
	root->left->right = newtreenode(5);
	root->right->left = newtreenode(6);
	rightmost(root);
}
