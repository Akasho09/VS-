
#include <iostream>
using namespace std ;

void reverse2s (int array [] , int size ) {
int i =0 ;
while (i < size-1)  //  CHECK
{
swap ( array [i] , array [i+1]) ;
cout<< "i = " <<i << " ..." <<array [i] << " " << array [i+1] << " " << endl;
i+= 2 ;
}
cout<< "i = " <<i << " ..." <<array [i] << " " << array [i+1] << " " << endl;
}

int main () {
int n;
cin >> n;
int Ar [100];
for (int i=0 ; i < n ; i++) {
cin >> Ar [i] ;
}
reverse2s ( Ar , n ) ;
}
