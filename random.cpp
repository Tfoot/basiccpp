#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
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
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;

    }
    return head;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertnode(node* head,int i,int data){
    node* temp=head;
    int count=0;
    while(count<i-1){
        temp=temp->next;
    }
}

int main(){

    node* head=takeInput();
    print(head);
    return 0;
}