#include <iostream>
using namespace std;

class Node {
public:
int data;
Node* next;
Node(int data) {
this->data = data;
this->next = NULL;
}
};

class Queue {
private:
Node* front;
Node* rear;
public:
Queue() {
front = rear = nullptr;
}
void enqueue(int item) {
Node* newNode = new Node(item);
if (isEmpty()) {
front = rear = newNode;
} else {
rear->next = newNode;
rear = newNode;
}
cout << "Enqueued: " << item << endl;

}
void dequeue() {
if (isEmpty()) {
cout << "Queue is empty. Cannot dequeue.\n";
} else {
Node* temp = front;
front = front->next;
if (front == nullptr) {
rear = nullptr;
}
cout << "Dequeued: " << temp->data << endl;
delete temp;
}
}
bool isEmpty() {
return front == nullptr;
}
void display() {
if (isEmpty()) {
cout << "Queue is empty.\n";
} else {
cout << "Queue elements: ";
Node* temp = front;
while (temp != nullptr) {
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}
}
};
int main() {
cout << "Name:-MOHD.SAQIB\nRoll No:-22BCS059\n\n";
Queue queue;
int choice, element;
do {
cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n0. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
cout << "Enter element to enqueue: ";
cin >> element;
queue.enqueue(element);
break;
case 2:
queue.dequeue();
break;
case 3:
queue.display();
break;
case 0:
cout << "Exiting the program.\n";
break;
default:
cout << "Invalid choice. Please try again.\n";
}
} while (choice != 0);
return 0;
}