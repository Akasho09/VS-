#include <iostream>
using namespace std ;
int main () {
    int n;
    cin >>n;
    char cpr [16]="0123456789ABCDE";
char ans [10];
int i=0;
while (n!=0){
ans[i]=cpr[n%16];
n=n/16; i++;
}
for (int j=i;j>=0;j--){
        cout <<ans[j] ;
    }
}