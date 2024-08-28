#include <iostream>
using namespace std;

void P (int n) {
    int i;
    for (i=1 ; i<=n ; i++) {
cout << i << " " ;
    }
}

int main () {
    int n;
cin >> n;
P (n) ;
}