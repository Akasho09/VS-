#include <iostream>
using namespace std ; 
int main () {
// no of occurence using binary
 int n,a;
 int array[10];
cin >>n;
for (int i=0; i<n ; i++) {
cin >> array[i] ;
}
cin >> a ;
int mid;
int i=0;
int j=n-1;
while (i<=mid && j<=mid) {
 mid = (i+j)/2;
if (array[mid] > a) {
    j = mid +1;
}
else if (array[mid] < a) {
    i=mid+1;
}
else 
int k = mid ;
break;
}

}