#include <iostream>
using namespace std ;
char getMaxOccuringChar(string str)
    {
        int n=str.length();
        int array[26]={0};//creating an array respective to 26 letters of alphabet
        int ans=-1;
        int p;
        for (int i=0;i<n;i++)
{
    int c=str[i]-97; //respective no to a character
    array[c]++; 
    if (ans<array[c]){ //ans gives max occurence 
        ans=array[c];
p=c; //storing no respective to the max occurence 
    }
}
char s=p+'a';
return s;
}
int main () {
string str;
cin >>str;
cout <<getMaxOccuringChar(str);
}