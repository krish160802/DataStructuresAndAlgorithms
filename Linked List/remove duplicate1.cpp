#include <bits/stdc++.h>
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
void removedupl(node* &head){
	node* curr = head;
	node* temp;
	if(curr == NULL){
		return;
	}
	
	while(curr->next != NULL){
		if(curr->data == curr->next->data){
			temp = curr->next->next;
			delete(curr->next);
			curr->next = temp; 
		}
		else{
			curr = curr->next;
		}
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
	insertend(head,1);
	insertend(head,4);
	insertend(head,4);
	insertend(head,6);
	insertend(head,7);
	removedupl(head);
	print(head);
}
