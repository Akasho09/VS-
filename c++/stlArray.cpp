#include <iostream>
#include <array>
using namespace std ;

int main () {
array <int,3> a= {1,9,7};
cout << a.size () <<endl;
cout << a.at(1) <<endl;
cout << a.front () <<endl;
cout << a.back () <<endl;
cout << a.empty () <<endl;
}