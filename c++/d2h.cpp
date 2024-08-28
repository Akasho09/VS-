#include <iostream>
using namespace std ;
int main () {
    int n;
    cin >>n;
    char cpr [16]="0123456789ABCDE";
char ans [10];
int i=0;
    while (n!=0){
ans[i]=n%16;
if (ans[i]<10){
ans[i]+=48;
} 
else 
ans[i]+=55;
n=n/16;
i++;
    }
    for (int j=i;j>=0;j--){
        cout <<ans[j] ;
    }
}