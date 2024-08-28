#include <iostream>
using namespace std ;
int main () {
int arr[10] ={1,3,5,7,9,11,13,15,17,19};
int arr2 [10]={0,2,4,6,8,10,12,14,16,18};
int arr3[20];
int p,q,r=0;

//merge 2 arrays 
for ( p=0,q=0;q<10&&p<10 ;){
 if (arr[p] < arr2[q]) {
    arr3[r]=arr[p];
p++;r++;
}
else if (arr[p] > arr2[q]){
        arr3 [r]=arr2[q];
        q++;r++;
}
else {  
    arr3 [r]=arr2[q];
            r++;
    arr3 [r]=arr[p];
        p++;q++;r++;
}
}
cout <<"p is  " <<p <<"q is " <<q <<endl;
// adding remains of first array elements 
    while (p < 10) {
        arr3[r] = arr[p];
        p++;
        r++;
    }

    // Handle remaining elements in arr2
    while (q < 10) {
        arr3[r] = arr2[q];
        q++;
        r++;
    }

for (int i=0;i<20;i++)
{ cout <<arr3[i] <<"  " <<endl;
}
}