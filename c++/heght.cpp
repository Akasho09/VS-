#include <iostream>
using namespace std ;
int main() {
int heights [100] ;
int n,m,ans,b,c,sum;
cout << " enter no of trees " ;
cin >> n;
cout << " enter heights  " ;
sum =0 ;
for (int i=0; i<n ;i++) {
    cin >> heights[i] ;
}
for (int i=0; i<n ;i++) {
    sum = sum + heights[i] ;
}

cout << " enter height required  " ;
cin >> m ;
int i =0;
c =0;
while (i<n) 
 { 
    if (ans > heights[i]) {
sum = sum - heights[i] ;
 c++;
}
i++;
 }
 ans = (sum - m ) / (n-c ) ;
  cout << "ans is " << ans ;

}