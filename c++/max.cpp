#include <iostream>
using namespace std ;
/*
int ForMaxNum (int num[] , int n) {
int max = num[0] ;
for (int i=1 ; i<=n ; i++)
{
if (num[i] > max ) {
    max = num[i] ;
}
} 
return max ;
} 
*/

int main () 
{  int n;
cin >> n; 
int array [1000] ; //array size 1000
//input array
    for (int i=0 ; i<n ; i++) {
cin >>  array[i] ;
 }
cout << array [5] << "  " << array [9] << " " << array[12] ;
/*
// sum of array
int sum =0;
for (int j=0 ; j<n ; j++) {
    sum = sum + array [j] ;
}
cout <<endl <<  sum ;
*/
}  