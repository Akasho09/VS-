#include <iostream>
using namespace std ;
int main () {
int i,j,k;
i=1;
j=1;
int o ;
for  (;i<=5;) {
cout << i << "   " << o <<"   " <<  endl ;
i++;
j++;
o = i+j;
}
cout << i << "   " <<o <<  "  "  << endl << endl;


int sum1=22;
int sum2=10;
int nums [5]={2,3,4,6,8};
int f=0;
while(sum2<sum1) {
sum2 = sum2 + nums[f];
f++;
cout << sum1 << "  " <<f << " " << sum2 << endl;
}
cout << sum1 << "  " <<f << " "  << sum2 << endl;
}