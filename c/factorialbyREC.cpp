#include <iostream>
using namespace std;
int factorial (int n){

if (n==0) //base condition
{
    return 1;
}
cout << "n is " <<n <<endl;
int fac1=n*factorial(n-1);
cout << fac1 <<"  ";  
// calls factorial upto base conditon which return 1 , 1 gets xed by 1,2,...n =fac1 ;
cout <<endl;
return fac1;
}
int main (){

int n;
cin >>n;
cout <<endl <<factorial (n);

}