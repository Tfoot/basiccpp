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
        tail=tail->next;
    }
    cin>>data;
}
return head;
}

void insert_node(node* head, int i,int data){
    node* newnode=new node(data);
    int count=0;
    node* temp=head;
    while(count<i-2){
        temp=temp->next;
        count++;
    }
    node* a=temp->next;
    newnode->next=a;
    temp->next=newnode;
}

void delete_node(node* head,int data){
    int count=0;
    node* temp=head;
    while(data!=temp->data){
        temp=temp->next;
    }
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){

    node* head=takeInput();
    
    print(head);
    int i;
    int data;
    cin>>i>>data;
    insert_node(head,i,data);
    print(head);

    return 0;
}