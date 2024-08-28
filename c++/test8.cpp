#include <iostream>
using namespace std ;
// unique elements
int unique (int array [] , int size ) {
int i,j,n ;
i=1;
int a;
 /*
while (i<n) {
    j=1 ;
a = array [i] ;
 while (j<n && j!=i) {
    if ( array [j] == a   ) {
        return 0;
    }
    else {
        return a;
    }
 }
}
return a ; }
*/
a= array[0] ;
while (i< n) {
bool b = (array[i] == a) {
return 0;
}
}
}
int main () {
int ar [100] ;
int n;
cin >> n;
for (int i=0 ; i<n ; i++) {
cin >> ar [i] ;
}
cout << unique (ar , n) ;
}
