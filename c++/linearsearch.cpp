#include <iostream>
using namespace std ;
bool keyfinder (int array[], int size, int key )  {
for (int i=0 ; i<=size ;i++ ){
if (array[i] == key ) {
    return 1;
}
}
return 0;
}
int main () {

int array [5] = {1,2,5,7,9} ;
int key;
cin >> key ;
bool b= keyfinder ( array , 5 , key) ;
if (b==1) {
    cout << "key is present " ;
}
else 
cout << " not present  " ;

}