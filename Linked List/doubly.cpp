#include<bits/stdc++.h>
using namespace std;
struct newnode{
    int data;
    newnode *next;
    newnode *prev;
};

void insbeg(newnode** head,int data){
    newnode* node = new newnode();
    node->data = data;
    node->next = *head;
    node->prev = NULL;
    if(*head != NULL){
        (*head)->prev = node;
    }
    *head = node;
}
void afternode(newnode* prev,int data){
    if (prev == NULL){
        return;
    }
    newnode* node = new newnode();
    node->data = data;
    node->next = prev->next;
    node->prev = prev;
    prev->next = node;
    if(node->next != NULL){
        node->next->prev = node;
    }
}
void befnode(newnode* next,int data){
	if(next == NULL){
		return;
	}
	newnode* node = new newnode();
	node->data = data;
	node->next = next;
	node->prev = next->prev;
	next->prev = node;
	if(node->prev != NULL){
		node->prev->next = node;
	}
}
void printing(newnode *node){
    while(node!=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<endl;
}

int main(){
    newnode *head = NULL;
    insbeg(&head,2);
    afternode(head,12);
    befnode(head->next,3);
    insbeg(&head,8);
    printing(head);
}
