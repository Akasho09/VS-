#include <iostream>
using namespace std ;
/*void increment  (int n){
    n++;
}
 
int increment2  (int n){
    n++;
    cout <<"inside " <<&n << "  " <<n <<endl;
    return n;
}
int increment3  (int *p){
    *p++;
    cout <<*p <<"  " <<p <<endl;
    cout <<endl <<&p <<"  " <<endl;
    return *p;
}

int i4 (int array[] ,int n) {
    array[n] =4;
        cout <<endl <<&n <<"  " <<array <<endl;
cout <<endl <<array[n];
}
*/
void swap (int *a , int *b ){
int y=*b;
*b=*a;
*a=y;
}
int main () {
int arr[5]={1,2,3,4,5};
/* int *p=&arr[0];
p++;
cout <<*p <<"  " <<*arr << "   "<<*(arr+2) <<endl; */
int n=5;
/*increment  (n);
cout <<n <<endl;
increment2  (n);
cout <<n <<endl;
cout <<increment2 (n) <<endl; */
/*int *p=&n;
cout <<endl <<&n <<"  " <<p <<endl;
cout <<endl <<&p <<"  " <<endl;

increment2  (n);
    cout <<"out " <<&n << "  " <<endl;
i4(arr,2);
        cout <<endl <<&n <<"  " <<arr <<endl;
cout <<endl <<arr[2];  */
int a=5,b=4;
swap (&a,&b);
cout <<a <<" " <<b;

}