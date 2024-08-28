#include <stdio.h>
int update (int*p){
    *p=*p+1;
}

int main () {
 /*   int n[4]={8,2,34,5};
    printf ("value of n is %d\n",*n) ;   

int*p=&n[0];
        printf ("value of *p is %d\n",*p) ;   
    /* printf ("size of p is %d\n",sizeof(p)) ;   
       printf ("size of n is %d\n",sizeof(n)) ; */
      /*  printf ("address of n is %p\n",&n) ;   
        printf ("address of p is %p\n",&p) ; 
        printf ("address of n is %x\n",&n) ; */

   /*   printf ("value of *p is %d\n",*p) ; 
        printf ("address of n is %p\n",&n) ;   
        printf ("address of p is %p\n",&p) ;  
      printf ("address of p is %x\n",&p) ; */ 
      char ch [5]= "abcd";
        printf ("ch is %s\n",ch) ; 
     /*   printf ("address of ch is %d\n",&ch) ; */
                printf ("address of ch is %p\n",&ch) ;   
char *c = &ch[0];
        printf ("c is %s\n",c) ; 
char **c2=&c;
        printf ("c2 is %p\n",c2) ; 
printf ("update is %c",update (c)) ; 


}
