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

void search(node* &head,int val ){
	node* n = new node(val);
	
	node* temp = head;
	while(temp->next != NULL){
		if(temp->data == val){
			cout<<"yes present";
		}
		temp = temp->next;
	}
	
}

int main(){
	node* head=NULL;
	insertend(head,1);
	insertend(head,4);
	insertend(head,8);
	search(head,4);
}
