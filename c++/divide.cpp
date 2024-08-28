#include <iostream>
using namespace std ;
int main () {
    int n,a,b,c,i;
    int dividend , divisor ;
    cin >> dividend >> divisor ;
a=-1;
 while (dividend >= 0) {
a = a+1 ;
dividend = dividend - divisor ;
 }
 cout << a ;
}