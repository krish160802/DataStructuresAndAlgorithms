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

bool detection(node* &head){
	node* slow = head;
	node* fast = head;
	
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow==fast){
			return true;
		}
	}
	return false;
}
void print(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"->";
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
	makecycle(head,3);
	cout<<detection(head)<<endl;
}
