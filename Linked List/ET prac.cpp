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

void print(node* &head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void insert(node* &head,int x){
	node* n = new node(x);
	
	if(head==NULL){
		head = n;
		return;
	}
	
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = n;
}

node* rev(node* &head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	
	node* prev = NULL;
	node* nx;
	node*curr = head;
	
	while(curr!=NULL){
		nx = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nx;
	}
	
	return prev;
}

//node* revkg(node* &head,int k){
//	
//	if(head==NULL|| head->next==NULL){
//		return head;
//	}
//	
//	int c=0;
//	
//	node* prev = NULL;
//	node* nx=NULL;
//	node*curr = head;
//	
//	while(curr!=NULL && c<k){
//		nx = curr->next;
//		curr->next = prev;
//		prev = curr;
//		curr = nx;
//		c++;
//	}
//	
//	if(nx!=NULL){
//		head->next = revkg(nx,k);
//	}
//	
//	return prev;
//	
//}
//
//node* revbw(node* head,int l,int r){
//	
//	if(head==NULL || l==r|| head->next==NULL){
//		return head;
//	}
//	
//	node* dmy = new node(0);
//	node* prev = dmy;
//	node* tail;
//	dmy->next = head;
//	
//	node* temp=head;
//	for(int i=0;i<l-1;i++){
//		prev = prev->next;
//	}
//	tail = prev->next; 		// 1 2 3 4 5 6
//	
//	for(int i=0;i<r-l;i++){
//		node* temp = prev->next;
//		prev->next = tail->next;
//		tail->next = tail->next->next;
//		prev->next->next = temp;
//	}
//	
//	return dmy->next;
//}
//
//node* mid(node* head){
//	
//	if(head==NULL || head->next==NULL){
//		return head;
//	}
//	
//	node* slow = head;
//	node* fast = head;
//	
//	while(fast->next!=NULL && fast->next->next!=NULL){
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	
//	return slow;
//}
//
//bool pal(node* &head){
//	if(head==NULL || head->next==NULL){
//		return head;
//	}
//	
//	node* m = mid(head);
//	node* head1 = m->next;
//	m->next = NULL;
//	
//	node* rhd = rev(head1);
//	
//	while(head!=NULL && rhd!=NULL){
//		if(head->data != rhd->data){
//			return false;
//		}
//		
//		head = head->next;
//		rhd = rhd->next;
//	}
//	
//	return true;
//	 
//}
//
//node* mrghlp(node* l1,node* l2){
//	if(l1==NULL){
//		return l2;
//	}
//	if(l2==NULL){
//		return l1;
//	}
//	if(l1->data>l2->data){
//		l2->next = mrghlp(l1,l2->next);
//		return l2;
//	}
//	else{
//		l1->next = mrghlp(l1->next,l2);
//		return l1;
//	}
//}
//
//node* mrg(node* &head){
//	if(head==NULL || head->next==NULL){
//		return head;
//	}
//	
//	node* m = mid(head);
//	node* head1 = m->next;
//	m->next = NULL;
//	
//	head = mrg(head);
//	head1 = mrg(head1);
//	
//	return mrghlp(head,head1);
//}

node* addl(node* l1,node* l2){
	
	if(l1==NULL && l2==NULL){
		return NULL;
	}
	if(l1==NULL){
		return l2;
	}
	if(l2==NULL){
		return l1;
	}
	
	l1 = rev(l1);
	l2 = rev(l2);
	
	int c = 0;
	
	node* nhd = new node(0);
	node* t = nhd;
	
	while(l1!=NULL || l2!=NULL || c!=NULL){
		int sum = 0;
		if(l1!=NULL){
			sum+=l1->data;
			l1=l1->next;
		}
		if(l2!=NULL){
			sum+=l2->data;
			l2=l2->next;
		}
		sum+=c;
		c = sum/10;
		node* n = new node(sum%10);
		t->next = n;
		t = t->next;
	}
	return rev(nhd->next);
}

node* delnx(node* head){
	head = rev(head);
	
	node* cur = head;
	node* prev = head;
	int m = head->data;
	head = head->next;
	
	while(head!=NULL){
		if(head->data>=m){
			m = head->data;
			prev = head;
			head = head->next;
		}
		else{
			prev->next = head->next;
			head = prev->next;	
		}
	}// 1 4 7 3 5
	
	head = rev(cur);
	return head;
}

node* oddev(node* &head){
	node* odd = new node(-1);
	node* even = new node(-1);
	
	node* o = odd;
	node* e = even;
	node* temp = head;
	
	while(temp!=NULL){
		if((temp->data)%2!=0){
			odd->next = temp;
			temp = temp->next;
			odd = odd->next;
			odd->next = NULL;
		}
		
		else{
			even->next = temp;
			temp = temp->next;
			even = even->next;
			even->next = NULL;
		}
	}
	
	odd->next = e->next;
	print(o->next);
}

int main(){
	
	node* head = NULL;
	
//	node* l1 = NULL;
//	node* l2 = NULL;
//	node* res = NULL;
//	
	int n,m,k,l,r;
	cin>>n;
//	cin>>m;

//	cin>>l;
//	cin>>r;
	
	for(int i=0;i<n;i++){
		int x1;
		cin>>x1;
		insert(head,x1);
	}
//	
//	for(int i=0;i<m;i++){
//		int x2;
//		cin>>x2;
//		insert(l2,x2);
//	}
	
	
	
//	node* rh = rev(head);
//	node* rkh = revkg(head,2);
//	node* rbh = revbw(head,l,r);
//	node* md = mid(head);
//	cout<<md->data;

//	if(pal(head)){
//		cout<<"yes";
//	}
//	else{
//		cout<<"no";
//	}
	
	

//	head = mrg(head);
	
//	res = addl(l1,l2);
	
	oddev(head);
	
//	print(res);

	
}
