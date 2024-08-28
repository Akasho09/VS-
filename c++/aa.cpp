#include <iostream>
using namespace std;

int main() {
    int arr[3][4]= { {1, 2, 3, 4} ,
    {5, 6, 7, 8},
    {9, 10, 11, 12} 
};
    
  /*  int i,j;
    i=0;
    j=0;
    while (i<3){
    cout << arr[i][j] <<" ";
    i++;
    }
    cout <<endl << arr[i][j]; */
int n,m,t;
 n=3;
 m=4;
cin >>t;

int s1=0;
int e1=n-1;
int m1 = s1 + (e1 - s1) / 2;

int s2=0;
int e2=m-1;
int m2 = s2 + (e2 - s2) / 2;

while (s1<e1 ) {
if (arr[m1][0]>t){
     e1=m1;} 

  else if (arr[m1][0]<=t && arr[m1][m-1]>=t) {
while (s2<e2 ) {

 if (arr[m1][m2]==t) {
    cout << m1 << "fkin answer " << m2 <<endl;
    break;
  }
  else if (t>arr[m1][m2])
  { e2 =m2-1;
  }
  else {
  s2 =m2+1; }
  m2=s2+(e2-s2)/2;
}
  }
else {
  s1=m1+1;
 }
m1=s1+(e1-s1)/2;
  }
}