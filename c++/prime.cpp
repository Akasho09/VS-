#include <iostream>
using namespace std ;
int main () {
    int n,a,b,c,i;
i=3;
while (i<=999)
{
a=2;
b=0;
while(a<i) {
if (i%a==0)
{ b=b+1;
}
  a++;
}
 if (b==0) {
    cout << i << "  ";
}
i++;
} }