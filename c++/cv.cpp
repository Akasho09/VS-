#include<iostream>
#include <cstdlib> // for exit()
#define n 5
using namespace std;
int arr[n];
int top = -1;
void push(int item) {
if (top == n - 1) {
cout << "Stack overflow\n";
} else {
arr[++top] = item;
cout << "Element pushed successfully\n";
}
}
void pop() {
if (top == -1) {
cout << "Stack is empty\n";
} else {
top--;
cout << "Element popped successfully\n";
}
}
void peek() {
if (top != -1) {
cout << "Top element: " << arr[top] << endl;
} else {
cout << "Stack is empty\n";
}
}
int size() {
return top + 1;
}
bool isEmpty() {
return top == -1;
}
bool isFull() {
return top == n - 1;
}
void display() {
if (top == -1) {
cout << "Stack is empty\n";
} else {
cout << "Stack elements: ";
for (int i = 0; i <= top; i++) {
cout << arr[i] << " ";
}
cout << endl;
}
}
int main() {
cout << "Name:-MOHD.SAQIB\nRoll No:-22BCS059\n\n";
int ch, elem;
while (true) {
cout << "Enter 1. Push 2. Pop 3. Peek 4. Size 5. IsEmpty 6. IsFull 7. Display 8. Exit\n";
cout << "Enter your choice: ";
cin >> ch;
switch (ch) {
case 1:
cout << "Enter element to push: ";
cin >> elem;
push(elem);
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
cout << "Size of stack is: " << size() << endl;
break;
case 5:
cout << "Stack is empty: " << (isEmpty() ? "true" : "false") <<
endl;
break;
case 6:
cout << "Stack is full: " << (isFull() ? "true" : "false") <<
endl;
break;
case 7:
display();
break;
case 8:
exit(0);
default:
cout << "Invalid choice. Please try again.\n";
}
}
return 0;
}