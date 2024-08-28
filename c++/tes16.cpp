#include <iostream>
using namespace std ;
int main () {
int i=0;
int arr [10]= {1,2,3,4,5,4,3,2,1,0} ;

while(i<10){
    if(arr[i+1]>arr[i]){
        i++;
    }
    else{
    cout << i ;
    break ;
    } 
}

}