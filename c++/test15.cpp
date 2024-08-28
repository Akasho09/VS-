#include <iostream>
using namespace std ;

int binary (int arr[] , int size , int key ) {
int s = 0;
int e = size -1;
int mid = (s+e) / 2 ;
while (s<=e) {  
if (arr[mid]==key){
    return mid ;
}
else if (arr[mid]<key) {
    s=mid+1;
}
else if (arr[mid] > key) {
    e = mid-1;
}
else {
    return -1;
}
 mid = (s+e) / 2 ;
} }

int main () {
    int even [6]= {1,2,4,5,6,7 } ;
    int odd [5] = {1,2,3,6,5} ;
cout << binary (even , 6 , 7) ;
cout << endl << binary (odd , 5 , 2) ;

}
