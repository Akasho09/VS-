#include <iostream>
using namespace std ;

int sort012(int arr [], int n)
{ 
  int arr2 [20] ;
   int a=0;
for (int i=0 ; i< n ; i++) {
if (arr[i]==0) {
arr2 [a] = 0 ;
a++;
} }
 
   int b=0;
for (int i=0 ; i< n ; i++) {
if (arr[i]==1) {
arr2 [a+b] = 1 ;
  b++;
} }
 
   int c=0;
for (int i=0 ; i < n ; i++) {
if (arr[i]==2) {
arr2 [a+b+c] =2 ;
  c++;
} }
 for (int i=0 ; i< n ; i++){
cout << arr2 [i] << "  " ;
 }
  return 0;
}

int main() {
    int n ;
    cin >> n;
int array [20] ;
for (int i=0 ; i<n ; i++ )
{
cin >> array [i] ;
}
 sort012 (array , n ) ;
}