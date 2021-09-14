#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
	node(int data){
		this->data=data;

	}
};
node* takeInput(){
	int data;
	cin>>data;
	node* head=NULL;
	node* tail=NULL;
	while(data!=-1){
		node* newnode=new node(data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
		}
		else
	{
		tail->next=newnode;
		tail=tail->next;
	}
	cin>>data;
	}
	return head;
}


int main(){

node* head=takeInput();

	return 0;
}