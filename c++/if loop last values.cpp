#include <iostream>
using namespace std;
int main () {
    int a,b,n,c,i;
    cout << "enter number of terms ";
    cin >> n;
    a=0, b=1 ;
for(i=1 ;i<=n  ;i++ )
{
    c=a+b ; 
     cout << "c=" <<c << endl ;
a=b;
b=c;
cout << "i=" <<i << " ";
    cout << "a=" <<a << " " ;
    cout << "b=" <<b << " ";
}
 cout <<endl << "i=" <<i;     
    cout << "a=" <<a ;
    cout << "b=" <<b;
    cout << "c=" <<c ;
}