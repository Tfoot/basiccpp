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

int main(){
    //statically

   node n1(1);
node* head=&n1;
   node n2(2);
   
   n1.next=&n2;
   cout<<n1.data<<" "<<n2.data<<endl;
   
   //dynamically

//    node* n3=new anode(10);
//     node* head=n3;
//    node* n4=new node(20);
//    n3->next=n4;
    return 0;
}