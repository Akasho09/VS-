#include <iostream>
#include <string>
using namespace std;

class node {
public:
int data;
node*next;
node(int data){
this->data=data;
this->next=NULL; }
};

void insertathead(node* &head,int d){
node*temp= new node(d);
temp->next=head;
head=temp;
}

void insertattail(node* &tail,int d){
node*temp=new node (d);
tail->next=temp;
tail=temp;
}

void print (node* &head  ){
node*temp=head;
while (temp!=NULL){
    cout <<temp->data <<"  ";
temp=temp->next;
}
cout <<endl;
} 

void insertatanyposition(node* &tail ,node* &head,int position ,int d){
if (position==1){
insertathead(head,d);
return;
}
node*temp=head;
int c=1;
while (c<position-1){
    temp=temp->next;
    c++;
}
if (temp->next==NULL){
    insertattail(tail,d);
    return;
}
node * nodetoinsert=new node (d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;

}

void deleteatanyposition (node* &head,int position){
if (position==1){
    node *temp=head;
    head=head->next;
    delete temp;
}
else {
    node*prev=NULL;
    node*curr=head;
int c=1;
while (c<position){
prev=curr;
curr=curr->next;
c++;
}
prev->next=curr->next;
delete curr;

}
}
int main (){ 
//creating a new node
node *node1=new node(10);
cout <<node1->data <<endl;
cout <<node1->next <<endl;
node*head=node1;  //head poited to node1
node*tail=node1; //tail points to node1
print(head);
insertathead(head,12);
print(head);
insertathead(head,19);
print(head);
insertattail(tail,89);
print(head);
insertattail(tail,90);
print(head);
insertatanyposition (tail,head,1,65);
print (head);
insertatanyposition (tail,head,7,65);
print (head);
deleteatanyposition(head,1);
print (head);

node * ptr=head;
ptr =head->next;
cout <<head->data <<endl;
cout <<ptr->data <<endl;
head=ptr->next;
cout <<head->data <<endl;
cout <<ptr->next->next->data <<endl;

}