#include <iostream>
using namespace std;
int main (){
int n;
cin >>n;
int array[n];
for (int i=0;i<n;i++){
    cin>>array[i];
}
for (int i=0;i<n;i++){
    cout <<array[i] <<"  ";
}
cout <<endl;

int arr[100]={0};
for (int i=0;i<n;i++){
    arr[array[i]]++;
}
int max=0;
int t;
for (int i=0;i<n;i++){
if (arr[i]>max){
    max=arr[i];
t=i;
}
}
cout << endl <<max <<"   " <<t ;
}