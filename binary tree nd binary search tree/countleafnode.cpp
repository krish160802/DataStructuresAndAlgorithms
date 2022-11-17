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
int leafnode( treenode *treenode){
	if(treenode == NULL){
		return 0;
	}
	if(treenode->left == NULL && treenode->right == NULL){
		return 1;
	}
	else{
		return leafnode(treenode->left) + leafnode(treenode->right);
	}
}

int main(){
	bool isodd = true;
	struct treenode *root = newtreenode(1);
	root->left = newtreenode(2);
	root->right = newtreenode(3);
	root->left->left = newtreenode(4);
	root->left->right = newtreenode(5);
	root->right->left = newtreenode(6);
	
	cout<<leafnode(root)<<endl;
}
