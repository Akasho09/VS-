#include <iostream>
using namespace std;
int main () {
int i;
int array [10] ={1,3,6,2,1,5,3,0,2,7} ;
int sum=0;
int n=9;
  i=n;
while (i<=10) {
sum = sum + array[i] ;
if (sum < 11 ) {
i--;
}
else if (sum > 11) {
    sum=0;
    i=0;
    n--;
}
else  {
    cout << i << "  " << "hiii" ;
}
}

}