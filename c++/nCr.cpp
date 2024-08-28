#include <iostream>
using namespace std;
//function
int factorial ( int n ) 
{  int i;
int ans = 1 ;
   for (i=1 ; i<=n ; i++) {
ans = ans * i;
   }
   return ans ;
    }
int nCr (int n , int r )
 {
int a = (factorial (n)) / (factorial (r) * factorial (n-r)) ;
return a ;
}
//program
int main () 
{
int n,r;
cin >> n >> r;
cout <<  nCr (n,r) << " " ;
}
