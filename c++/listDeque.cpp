#include <iostream>
#include <list>
#include <deque>
using namespace std ;
int main () {
list <int> l (2,7) ;
for (int i : l) {
    cout << i << "  ";
}
cout << endl;
l.push_front(5) ;
l.push_back(3) ;
l.push_back(6) ;
l.push_back(15) ;
l.push_back(18) ;
for (int i : l) {
    cout << i << "  ";
}
cout << endl;
list<int> ::iterator t = l.begin ();
t++;
t++; //travel 1 by 1 !!!
t++;
l.erase (t++) ;
for (int i : l) {
    cout << i << "  ";
}
cout << endl;

deque <int> d (9,2) ;
d.erase(d.begin (), d.begin() +6 ) ;
for (int i : d) {
    cout << i << "  ";
}
}