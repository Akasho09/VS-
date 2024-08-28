#include <stdio.h>
#include <math.h>
int main() {
  int a,b,n,d,c ;
  printf("enter value of n:");
  scanf ("%d" ,&n) ;
a=0;
  b=1;
  c=2;
  while (c<=n) {
printf ("%d...%d,%d,\n",c,a,b) ;
  a=a+b; //0 1 3 // 13579 9
b=a+b; // 1 2 5 
    c=c+2;
  }
    if (n%2!=0){
  printf ("%d...%d",c,a) ; } // a+b?
    else {}
}