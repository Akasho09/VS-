#include <iostream>
using namespace std ;
int main (){
string  s= "ABCDE";
cout <<s[0] <<"   " <<s[1] <<"   " <<s[2] <<s[3]  <<"   " <<s[4] <<"   " <<"  " <<endl;
s.erase (s.begin()+2);
cout <<s[0] <<"   " <<s[1] <<"   " <<s[2] <<s[3]  <<"   " <<s[4] <<"   " <<"  " <<endl;


} 