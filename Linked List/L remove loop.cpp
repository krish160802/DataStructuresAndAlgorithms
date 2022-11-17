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
void makecycle(node* &head, int pos){
	node* temp = head;
	node* start;
	int count = 1;
	while(temp->next != NULL){
		if(count == pos){
			start = temp;
		}
		temp = temp->next;
		count++;
	}
	temp->next = start;
}

void removecycle(node* &head){
	node* slow = head
	node* fast = head
	
	
	
}
