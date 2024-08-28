#include <iostream>
using namespace std;
int peak (int arr[] , int arrSize) {

int s=0;int e=arrSize-1;
  int m=s+(e-s)/2;
int ans;
while(s<=e){
if(arr[m]<arr[m+1]) {
s=m+1;
}
else if (arr[m-1]>arr[m])  {
e = m-1 ; }
else if (arr[m-1] < arr[m] && arr[m]>arr[m+1]) {
ans = m;
break;
}
  m=s+(e-s)/2;
}
return ans ;
}

int main () {

int array [7]={0,1,2,5,7,2,1} ;
cout << peak (array , 7) ;
return 0;

}