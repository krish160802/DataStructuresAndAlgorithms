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

void oddprint(treenode *treenode, bool isodd){
	if(treenode == NULL){
		return;
	}
	if(isodd){
		cout<<treenode->data<<" ";
	}
	oddprint(treenode->left,!isodd);
	oddprint(treenode->right,!isodd);
}
int main(){
	bool isodd = true;
	struct treenode *root = newtreenode(1);
	root->left = newtreenode(2);
	root->right = newtreenode(3);
	root->left->left = newtreenode(4);
	root->left->right = newtreenode(5);
	root->right->left = newtreenode(6);
	
	oddprint(root,isodd);
}
