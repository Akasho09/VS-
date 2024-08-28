#include <iostream>
using namespace std ;
// repeating elements in an array
int main () {
    int nums [10] = {1,4,6,9,2,4,5,1,3,9} ;
    int n =10;
int array2 [15] = {0};
int i=0;
while (i<n ) {
    if (array2 [nums[i]]==1) { 
        cout << nums [i] << " " ;
 }
 else {
array2 [nums[i]] = 1;
 }
i++;
}
}