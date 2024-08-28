#include<iostream>
using namespace std ;
int main () {
    int n ,t ;
cin >> n >> t;
int array [15];
for (int i=0;i<n; i++) {
cin >> array[i];
} 
for (int i=0; i< n -2; i++) {
for (int j=i+1; j<n-1 ; j++)  {
for (int k=i+2; k<n ; k++) {
if ( array[i]+array[j]+array[k] == t ){
cout <<   array[i] << array[j] << array[k] <<endl; 

} } } } }