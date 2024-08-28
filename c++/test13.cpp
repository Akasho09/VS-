#include <iostream>
using namespace std ;

int uniqueoccurrences(int arr[], int arrsize) {
    int array2 [10] ;
        int b ;
        int s=0;
for (int i=0;i < arrsize ;i=i+b  ){
    b=0;
   int a = arr[i] ;
for (int j=i+1 ; j< arrsize ; j++)
{
if (a == arr[j]) {
       b = b+1 ;
       swap(arr[i+b],arr[j]);
}
}
array2 [i] = b ;
s=s+1;
}
for (int k=0 ; k<s ; k++ ) {
int t = array2 [k] ;
    for (int p=k+1 ; p < s ; p++)
    {
        if (t == array2 [p]){
cout << "true " ;
}
}
}
cout <<"  false  "  ;
}

int main () {
    int n;
    int array [15];
    cin >> n ;
for (int i=0 ; i< n ; i++) {
cin >> array[i];
}
 uniqueoccurrences (array , n) ;
}