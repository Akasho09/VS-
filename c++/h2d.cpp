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
for (int i=0;i<n;i++)  {
int c=hd[i] ;
if ( c<57){
     int p=c-'0';
     cout <<p <<" ";
ans = p*pow(16,n-i-1)+ans ;
}
else {
   int t=toupper(c)-'A'+10;
ans = t*pow(16,n-i-1)+ans ;
}
}
cout <<ans ;
}