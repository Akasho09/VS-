#include <stdio.h>
int main () {
        int n,a,b,c,i;
    scanf ( " %d %d " ,&a,&n) ;
    i=1;
while (i<=a*n)
{
   if (i%a==0 && i%n==0) {
printf ("%d ", i) ;
return 0 ;
   }
   i++;
}
    }