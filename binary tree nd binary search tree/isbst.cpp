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

int isbsthlp(treenode* treenode,int min,int max);

int isbst(treenode* treenode){
	return(isbsthlp(treenode,INT_MIN,INT_MAX));
}

int isbsthlp(treenode* treenode,int min,int max){
	if(treenode == NULL){
		return 1;
	}
	if(treenode->data < min || treenode->data > max){
		return 0;
	}
	
	return isbsthlp(treenode->left,min,treenode->data-1) && isbsthlp(treenode->right,treenode->data+1,max);
}
int main(){
	struct treenode* root = new treenode(4);
	root->left = new treenode(2);
	root->right = new treenode(5);
	root->left->left = new treenode(1);
	root->left->right = new treenode(3);
	
	if(isbst(root)){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
} 
