#include <iostream>
using namespace std ;
char getMaxOccuringChar(string str)
    {
        int n=str.length();
        int array[26]={0};
        for (int i=0;i<n;i++)
{
    int c=str[i];
        int n=c-'a';
        array[n]++;
}
int ans;
for(int j=0;j<26;j++){
    int max=-1;
    if(max<array[j]){
        ans=j;
        max=array[j];

    }
}
char ch=ans+'a';
return ch;
}
 int main () {
string str;
cin >>str;
cout <<getMaxOccuringChar(str);
 }