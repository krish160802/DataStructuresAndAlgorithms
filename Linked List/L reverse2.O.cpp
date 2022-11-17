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

node* reverse2(node* &head, int k){
	node* curr = head;
	node* prev = NULL;
	node* temp;
	int count = 0;
	while(curr != NULL && count<k){
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
		count++;
	}
	if(temp != NULL){
		head->next = reverse2(temp,k);
	}
	return prev;
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
	insertend(head,2);
	node* newrev = reverse2(head,2);
	print(newrev);
}
