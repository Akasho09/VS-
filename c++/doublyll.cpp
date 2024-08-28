#include <iostream>
using namespace std;

class node {
    public:
int data;
node *prev;
node*next;
node (int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}
};
void print (node* &head) {
node*temp=head;
while (temp!=NULL){
    cout << temp->data <<"  ";
    temp=temp->next;
}
cout<<endl;
}

int getlen (node* &head) {
    int len =0;
    node*temp=head;
    while (temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertathead(node* &head,int d){
node*temp=new node (d); //create a new node
temp->next=head;
head->prev=temp;
head=temp;
}

void insertattail(node* &tail,int d){
node*temp=new node (d);
tail->next=temp;
temp->prev=tail;
 tail=temp;
}
int main (){

 node*node1=new node(10);
 node*head=node1;
 node*tail=node1;
 print (head);
cout <<getlen (head) <<"  " ;
insertathead(head,15);
 print (head);
 insertattail(tail,3);
  print (head);

}