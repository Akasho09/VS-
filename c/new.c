#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_no;
    int percentage ;
    char grade ;
    char name [6];
};

int main ()
{
    struct student s[20];
    int n;
printf ("enter number of students ");
scanf ("%d",&n);

struct student *ptr ;
ptr = (struct student*)malloc(n*sizeof(struct student));

//enter details 
printf ("enter roll no, grade , percentage and name of students ");
for (int i=1;i<=n;i++) {
scanf ("%d %c %d %s",&(ptr+i)->roll_no,&(ptr+i)->grade,&(ptr+i)->percentage,&(ptr+i)->name);
}

//print details
    printf ("\n\nroll_no\t\tgrade\t\tpercentage\tname\n");
for (int i=1;i<=n;i++) {
    printf("%d\t\t%c\t\t%d\t\t%s\n",(ptr+i)->roll_no,(ptr+i)->grade,(ptr+i)->percentage,(ptr+i)->name);


}