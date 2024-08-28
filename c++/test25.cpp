#include <iostream>
using namespace std ;
int main () {
int heights [100] ;
int n,m,b,c,sum;
cin >> n;
sum=0;
for (int i=0; i<n ;i++) {
    cin >> heights[i] ;
    sum = sum + heights[i] ;
}
cin >> m ;
int k=0 ;
int t =0 ;
int ans ;
 while (k<=sum) {
if ( (sum-t) <= m ) {
ans = k ;
break;
}
k++ ;
t= t + n ;
}
 cout <<endl << ans << " ";
}