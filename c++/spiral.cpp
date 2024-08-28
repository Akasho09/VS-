#include <iostream>
using namespace std ;
int main () {
int matrix [3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
int n=3 ;
int m=4;
int p,q=0; //counts rows and columns covered
int t=0; //new square box initilization
int k=n; //no of rows
int l=m; //no of columns
int d=0;
int s=0;
while (p<=n&&q<=m) {
    int i,j=0;
    while (j<m){
    cout<< matrix [i][j] <<"  ";
    j++;
    }
q++;
j--;
i++;

for (;i<n;i++){
    cout<< matrix [i][j] <<"  ";
}
p++;
i--;
j--;

for (;j>=t;j--){
    cout<< matrix [i][j] << "  ";
}
q++;
j++;
i--;

for (;i>s;i--){
    cout<< matrix [i][j] << "  ";
}
cout << endl;
p++;
s++;t++;m--;n--;d++;i++;j++;
} }