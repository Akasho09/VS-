#include <iostream>
using namespace std ;

int pivot (int arr[] , int n ) {
int s=0; int e =n-1;
int m = s+(e-s)/2 ;
int ans;
while (s<=e) {

if (arr[m] < arr[m-1]){
 ans = m ;
break ;
}
else if (arr[m]>arr[e]) {
s=m+1;
}
else {
e=m-1;
}
 m = s+(e-s)/2 ;
}
return ans;
}

int main () {
int array [10] = {7,8,9,10,0,1,2,3,4,5};
cout << pivot (array,10);
}