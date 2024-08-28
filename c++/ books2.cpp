#include <iostream>
using namespace std ;

int possibleans (int mid ,int array[] , int m ) {
int st[10];
int j,k=0;
while (j<m) {
st[j]=0;
int i=0;
while (st[j]<=mid) {
    st[j]+=array[i] ;
array[i]=0;
i++;
}
j++;
}
if (j>m+1) {
    return -j;
}
else 
    return mid ;
}

int main () {
int array[30];
int n,sum,m;
cin >> n;
cin >> m;
sum=0;
for (int i=0; i<n ;i++) {
cin >> array[i] ;
sum+=array[i];
}

int s=0;
int mid =s+(sum-s)/2;
cout << possibleans ( mid , array, m ) ;

}