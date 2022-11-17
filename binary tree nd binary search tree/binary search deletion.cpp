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
struct treenode* minval(struct treenode* node){
	struct treenode* cur = node;
	while(cur->left != NULL){
		cur = cur->left;
	}
	return cur;
}

struct treenode* deletion(struct treenode* root,int key){
	if(root == NULL){
		cout<<"not found";
		return NULL;
	}
	if(key<root->data){
		root->left = deletion(root->left,key);
	}
	else if(key>root->data){
		root->right = deletion(root->right,key);
	}
	else{
		treenode *temp = NULL;
		if(root->left == NULL && root->right == NULL){
			delete root;
			return NULL;
		}
		else if(root->left == NULL){
			temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right == NULL){
			temp = root->left;
			delete root;
			return temp;
		}
		
		temp = minval(root->right);
		root->data = temp->data;
		root->right = deletion(root->right,temp->data);
	}
	return root;
}


int main(){
	struct treenode *root = NULL;
	struct treenode *temp;
	int key;
	root = insertion(root,25);
	insertion(root,15);
	insertion(root,50);
	insertion(root,10);
	insertion(root,22);
	insertion(root,35);
	insertion(root,70);
	cout<<"before deletion"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"after deletion"<<endl;
	key = 22;
	cout<<"delete-"<<key<<endl;
	root = deletion(root,key);
	inorder(root);
}

