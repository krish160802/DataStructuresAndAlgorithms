#include<iostream>
using namespace std;

class node{
	public: 
	int data;
	node* left;
	node* right;
	
	node(int val){
		data = val;
	}
};

node* bst(node* root,int val){
	node* n = new node(val);
	if(root == NULL){
		return n;
	}
	if(val<=root->data){
		root->left = bst(root->left,val);
	}
	if(val>root->data){
		root->right = bst(root->right,val);
	}
}
void inorder(node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	node* root = NULL;
	for(int i = 0;i<5;i++){
		int num;
		cin>>num;
		root = bst(root,num);
	}
	
	inorder(root);
}
