#include <iostream>
using namespace std ;
int main () {
int array[6]={8,1,2,3} ;
int t;
/*
cin >> t ;
cout <<t;
cout << &array[0] << " " <<array <<endl;
cout << &array[1] << " " <<*array <<endl;
cout << &array[2] << " " <<*&array <<endl;
cout << &array[2] << " " <<*array+1 <<endl;
cout << 2[array] << " " << *(2+array) <<endl;
*/
new int;
int *p =new int ;
/*cout <<sizeof *(new int);
cout <<sizeof new int;
cout <<sizeof (p);*/
*p=1;
cout <<*p;
*(p+1)=5;
cout <<*(p+1) <<*p;
}