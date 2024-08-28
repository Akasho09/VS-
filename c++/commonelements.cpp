#include <iostream>
using namespace std ;
//common elements 
void repeat (int arr1 [] , int arr2 [] , int n , int m) {
int i = 0;
int array3 [10] ;
while (i < n) {
int a = arr1 [i] ;
int j=0 ;
while (j<m) {
	int b = arr2[j] ;
if (a==b) {
array3 [j] = b ;
cout << array3 [j] << " " ;
}
j++;
  }
i++;
}
}

int main() {
    int n ;
    cin >> n;
int array [10] ;
for (int i=0 ; i<n ; i++ )
{
cin >> array [i] ;
}

   int m ;
    cin >> m;
int array2 [10] ;
for (int j=0 ; j<m ; j++ )
{
cin >> array2 [j] ;
}

repeat (array , array2 , n, m) ;

} 