#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node* takeInput(){
    
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int main(){

    node* n1=new node(10);
    node* head=n1;

    node* n2=new node(20);
    node* n3=new node(30);
    node*n4=new node(40);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;

    print(head);

    return 0;
}