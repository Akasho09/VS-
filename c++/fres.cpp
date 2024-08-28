#include <iostream>
#include <math.h>
using namespace std ;
int main () {
char hd[15] ;
cin >>hd ;
cout <<hd <<endl;
int n=0;
//size of hd 
while (hd[n]!='\0') {
n++;
}
cout <<n <<endl;
int ans=0;
int i=0;
while ( i<n){
if (hd[i]>9){
hd[i]=hd[i]+'A'-0;
cout<<hd[i] <<" ";
i++;
}
i++;
}
}