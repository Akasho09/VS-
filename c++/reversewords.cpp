#include <iostream>
using namespace std ;
int main (){
    string s;
    cin >>s;
int n =s.length();
    int c=0;
    int i=n;
    while (i>=0){
    int p=1;
    i--;
//length of every word 
    for (;i>=0;)
    {
    if (s[i]=='.'){
        break;
        i--;
        }
        else {
        p++;
        i--;
        }
        }
        //printing every word 
        int j=i+1;
        for (;j<i+p;j++)
        {
        cout <<s[j];
        }
        cout <<s[i];
        }}