#include <stdio.h>

void rotate (int nums[], int numsSize, int k)
{
int j=0;
 while (j<= numsSize-k ) {
  nums [k+j] = nums [j]  ;
j++ ;
 }
 return nums ;
}

int main () {

}