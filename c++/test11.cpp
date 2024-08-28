#include <iostream>
using namespace std ;

bool uniqueoccurrences(int arr[] , int arrsize){
for (int i=0;i < arrsize ;i++  ){
    int b= 0;
   int a = arr[i] ;
for (int j=i+1 ; j< arrsize ; j++)
{
if (a == arr[j]) {
       b = b+1 ;
}
}
int array2 [100] ;
 array2[i] = b ;
}
return array2 ;
}

bool printarray (int array [] , int size )

for (int k=0 ; k<size ; k++ ) {
int t = array [k] ;
    for (int p=k+1 ; p< size ; p++)
    {
        if (t == array [p]){
return false ;
        }
}
return true ;
}
}

int main () {



}