#include <iostream>
using namespace std ;
int main () {
    int n,a,b,c,i;
    cin >> n;
   
    a=100;
        cout <<a << " rupee notes required are " ;
   b= n/100;
   cout << b << endl;
   n=n%100;

    a=50;
        cout <<a << " rupee notes required are " ;
   b= n/50;
   cout << b << endl;
   n=n%50;

 a=20;
        cout <<a << " rupee notes required are " ;
   b= n/20;
   cout << b << endl;
   n=n%20;

     cout << "1 rupee notes required are " << n;

return 0;

}
   
