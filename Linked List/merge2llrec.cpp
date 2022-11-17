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


void print(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

node* mergerec(node* &head1,node* &head2){
	//base case//
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	
	//recursive case//
	if(head1->data<=head2->data){
		head1->next = mergerec(head1->next,head2);
		return head1;
	}
	else{
		head2->next = mergerec(head1,head2->next);
		return head2;
	}
}

int main(){
	node* head=NULL;
	
	node* head1=NULL;
	node* head2=NULL;
	
	insertend(head1,1);
	insertend(head1,4);
	insertend(head1,8);
	
	insertend(head2,2);
	insertend(head2,5);
	insertend(head2,9);
	
	node* head3 = mergerec(head1,head2);

	print(head3);
	
}
