#include <iostream>
using namespace std ;

int nthTerm (int n) {
int ans = 3*n + 7;
return ans ;
}

int main() {
    int a,b;
cin >> a;
cout << nthTerm (a) ;
cin >> b;
cout << nthTerm (b) ;

}