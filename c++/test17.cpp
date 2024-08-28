#include <iostream> 
using namespace std ;
 int main () {
int i,j,m,n ;
int arr1[6] ={1,2,3,5,8,17} ;
int arr2[7] = {3,5,8,15,17,19,20} ;
  int array3 [5] ;
i = 0;
int k=0;
while (i < 6 ) {
j=i+1 ;
while (j<7) {
if (arr1[i]==arr2[j]) {
array3[k] = arr1[i] ;
k++;
break;
}
else if (arr1[i] > arr2[j]) {
j++;
}
}
i++;
}
cout << array3 [1]; 
}