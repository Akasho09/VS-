#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    int marks;
    char name [10];
    struct student *ptr ;
};
int main () {
struct student s[10];
int n;
scanf("%d",&n); 
struct student *ptr ;
int c;
int i=0;
int m=0;
while (c!=7){
    ptr = (struct student*)malloc(sizeof(struct student));
printf ("\n\nEnter 1 for addding student details \n2 for displyaing details \n3 for searching by roll no \n4 for search by name \n5 for topper details \n6 for getting details of students with marks less than the input marks\n7 for exit \n\n\n ");
scanf("%d",&c);
if (c==1){
scanf ("%d %d %s",&(ptr+i)->roll_no,&(ptr+i)->marks,&(ptr+i)->name); 
i++;
m++;
}
if (c==2){
printf ("Display records\n");
printf ("\nRoll no \t Marks \t Name\n");
for (int i=0;i<m;i++) {
    printf("%d\t\t %d\t%s\n",(ptr+i)->roll_no,(ptr+i)->marks,(ptr+i)->name);
}
}
if (c==3){
  int i=1;
    printf ("enter roll no to search  ");
int r;
scanf("%d",&r);
printf ("\nRoll no \t Marks \t Name\n");
for (int i=0;i<n;i++){
    if (r==(ptr+i)->roll_no) {
        printf("%d\t\t%d\t\t%s\n",(ptr+i)->roll_no,(ptr+i)->marks,(ptr+i)->name);
}
}
}
if (c==5){
    int ans=0;
    int s=0;
    for (int i=0;i<n;i++){
        if ((ptr+i)->marks>ans){
            ans =(ptr+i)->marks;
            s=i;
        }
    }
    printf ("Topper has %d marks and is  %s",ans,(ptr+s)->name) ;
}
if (c==4){
    char nameS[10];
    scanf("%s",&nameS);
    int i=0;
    printf ("Roll no \t\t Marks \t\t Name\n");
while (i<n){
if (strcmp((ptr+i)->name,nameS[i]==0)){
printf("%d\t\t%d\t\t%s\n",(ptr+i)->roll_no,(ptr+i)->marks,(ptr+i)->name);
}
}
} 
/*  FOR STRINGS
if (c==4){
    char nameS[10];
    scanf("%s",&nameS);
    int i=0;
    printf ("Roll no \t\t Marks \t\t Name\n");
while (i<n){
if ((ptr+i)->name.compare(nameS)==0){
printf("%d\t\t%d\t\t%s\n",(ptr+i)->roll_no,(ptr+i)->marks,(ptr+i)->name);
}
}
} */

if (c==6){
    printf ("enter input marks \n ") ;
    int ma;
    scanf ("%d",&ma);
        printf ("student names with marks less than input marks \n") ;
    for (int i=0;i<n;i++){
     if ((ptr+i)->marks<ma){
printf("%s \n",(ptr+i)->name) ;
}
}
}
}}