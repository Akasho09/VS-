#include <iostream>
using namespace std ;

class akash {
int i;
char c;
public :
void si(int p){
    cout << "enter password "<<endl;
    int t;
    cin >> t;
    if (t==4152) {
    i=p;
} 
else {
    cout << " wrong password " <<endl;
} }
int geti(){
    return i;
}

char getc(){
    return c;
}
void setc (){
    char a;
    cin >>a;
c=a;
}
/*string getname(){
return name;
}
void setname(string s){
        name=s;
}*/ };
int main () {
    akash a ;
 //setted i in private
a.si(15);
cout <<a.geti() <<endl;
a.setc();
cout <<a.getc()<<endl;
cout <<sizeof (a);
}