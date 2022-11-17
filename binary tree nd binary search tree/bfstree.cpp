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

void bfstree(treenode* root){
	queue<treenode*>q;
	treenode* temp = root;
	while(temp){
		cout<<temp->data<<" ";
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
		temp = q.front();
		q.pop();
	}
}

int main(){
	struct treenode *root = newtreenode(0);
	root->left = newtreenode(1);
	root->right = newtreenode(2);
	root->left->left = newtreenode(11);
	root->left->right = newtreenode(12);
	root->right->left = newtreenode(21);
	root->right->right = newtreenode(22);
	
	bfstree(root);
	
}
