#include <iostream>
using namespace std ;  

void printarray ( int array [] , int size ) {
for (int i=0 ; i<size ; i++) {
cout << array [i] << " " ;
}
}

void reverse2s (int array [] , int size ) {
int i =0 ;
while (i < size-1)  //  CHECK
{
swap ( array [i] , array [i+1]) ;
i+= 2 ;
cout << "arr of  " <<i << "th is " << array [i] << endl;

}
cout << "i outside  = " << i << endl;

}

int main () {
int n;
cin >> n;
int Ar [100];
for (int i=0 ; i < n ; i++) {
cin >> Ar [i] ;
}
reverse2s ( Ar , n ) ;
printarray (Ar , n ) ;

}

