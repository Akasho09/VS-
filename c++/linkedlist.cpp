#include <iostream>
using namespace std;

struct node {
    int data;
    node*next;

    node (int d){
this->data=d;
this ->next=NULL;
}

};


int main () {

node*node1=new node(10);
cout <<node1 <<node1->data <<endl;

}