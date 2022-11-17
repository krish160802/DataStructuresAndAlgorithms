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
	
	if(head == NULL){
		head = n;
		return;
	}
	
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
}
void movelast(node* &head){
	if(head == NULL && head->next != NULL){
		return;
	}
	node* temp = head;
	node* prev = NULL;
	while( head->next != NULL){
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	temp->next = head;
	head = temp;	
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
	insertend(head,8);
	insertend(head,9);
	movelast(head);
	print(head);
	
}
