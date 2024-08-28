#include <iostream>
using namespace std ;
void update (int **p ) {
  *p=*p+1;
  cout << *p <<endl;
}

void updatec (char*c){
  *c=*c+1;
    cout << *c <<endl;
}

int main () {
  int * p =NULL;
    int a,b =5;
p=&a;
/*
 cout << a << "  " <<p << "  " <<*p <<"  " <<&a <<endl;
a++;
cout << a << "  " <<p << "  " <<*p <<endl;
(*p)++;
cout << a << "  " <<p << "  " <<*p <<endl;

int *q =p;
cout << p <<"  " << *p << "  " <<q << "  " <<*q <<endl;
cout << &p <<"  " <<*p << "  " <<&q << "  " <<*q <<endl;


p++;
cout << a << "  " <<p << "  " <<*p <<endl;
*/
int ** q =&p;
update (q);
int ***t=&q;
update(*t) ;

char ch ='p';
char *c =&ch;
updatec (c) ;
char **d = &c;
updatec (*d);

}