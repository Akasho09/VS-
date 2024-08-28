#include <iostream>
using namespace std ;

int main () {
int a=0 ;
int b=1;
int c,n;
cin >> n;
int i=2;
/*
while (i<=n){
a = a+b; // a=1 3
b = a+b; //b=2 5 
i+=2 ;
}
if (n%2==0) {
cout << endl <<  a << " "  ;
}
else 
cout << endl <<  b << " "  ;
}
*/
while (i<=n) {  
      c = a + b;
        a = b;
        b = c;
i++;
}
cout << a << endl ;
}
