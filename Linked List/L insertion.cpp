#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data = val;
			next = NULL;
		}
		
};


void insertbeg(node* &head, int val){
	node* n = new node(val);
	n->next = head;
	head = n;
}


void insertend(node* &head, int val){
	
	node* n = new node(val);
	
	if(head==NULL){
		head = n;
		return;
	}
	
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
}


void between(node* temp, int val){
	if (temp == NULL){
		cout<<"not";
	}
	node* n = new node(val);
	n->next = temp->next;
	temp->next = n;
}
void insertmid(node* &head,int val){
	node* n = new node(val);
	
	if(head==NULL){
		cout<<"not"<<endl;
	}
	else if(head->next==NULL){
		n->next=head;
		n=temp;
	}
	else{
		node* slow=head;
		node* fast=head;
		
		while(fast->next != NULL && fast->next->next!= NULL){
			fast = fast->next->next;
			slow = slow->next;
		}
		n->next = slow->next;
		slow->next = n;
	}
}
void print(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
int main(){
	node* head=NULL;
//	insertend(head,1);
//	insertend(head,4);
//	insertend(head,8);
	insertbeg(head,5);
//	between(head->next->next,6);
	print(head);
	
}
