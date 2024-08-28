#include <iostream>
using namespace std ;
int main() {
int n=6;
int m=6;
int arr1[6]={1,3,5,6,8,9};
int arr2[6]={2,4,7,11,14,15};

    int array[2000] ;
    int i,j,p=0;
while (i <n && j<m){
    if (arr1[i]<=arr2[j]){
array[p++]=arr1[i++];
    }
    else {
    array[p++]=arr2[j++]; }
}
while(i<n){
    array[p++]=arr1[i++];
}
while(j<m){
    array[p++]=arr1[j++];
}
cout << array[3] <<endl;
int t=(n+m)/2;
int k=array[t];
cout << k <<endl;
}