#include<iostream>
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

void deletion(node* &head, int val){
	node* n = new node(val);
	
	if(head == NULL){
		return;
	}
	
	node* temp = head;
	while(temp->next->data != val){
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next = temp->next->next;
	
	delete todelete;
}

void delhead(node* &head){
	node* todelete = head;
	head = head->next;
	
	delete todelete;
	
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
	insertend(head,6);
	insertend(head,3);
	deletion(head,8);
	delhead(head);
	print(head);
}
