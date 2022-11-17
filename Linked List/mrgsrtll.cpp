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

node* mid(node* &head){
	if(head==NULL){
		return head;
	}
	else{
		node* slow=head;
		node* fast=head;
	
		while(fast->next!=NULL && fast->next->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		return slow;
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

node* mrg(node* &head1){
	if(head1->next==NULL){
		return head1;
	}
	
	node* middl = mid(head1);
	node* head2 = middl->next;
	middl->next = NULL;
	
	head1 = mrg(head1);
	head2 = mrg(head2);
	
	return mergerec(head1,head2);
	
}

int main(){

//	node* head=NULL;
//	node* head1=NULL;
//	node* head2=NULL;
	node* head4=NULL;
//	node* head4=NULL;
	
	insertend(head4,1);
	insertend(head4,4);
	insertend(head4,8);
	insertend(head4,2);
	insertend(head4,5);
	insertend(head4,9);
	
	head4 = mrg(head4);

	print(head4);
	
}
