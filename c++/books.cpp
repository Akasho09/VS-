#include <iostream>
using namespace std ;
bool possiblesol (int array[10],int n ,int m,int mid)
 { int i=1;
 int t=0;
 int j;
while ( i<=m) {
int st =0 ;
j=t ;
while(st<=mid )
{
st+=array[j] ;
j++;
}
t=j;
i++;
}
if ( i==m && j==n ){
    return true ;
}
else
return false ;
}
int main () {
int pages [100] ;
int n,m,b,c,sum;
cin >> n;
sum=0;
for (int i=0; i<n ;i++) {
    cin >> pages[i] ;
    sum = sum + pages[i] ;
}
cout << sum ;
cin >> m;
int s=0;
int e=sum; 
int mid = s+(e-s)/2;
int ans =-1;
while (s<=e) {
    if(possiblesol(pages,n,m,mid)) {
        ans = mid ;
s = mid ;
    }
    else {
e = mid ;
    }
 mid = s+(e-s)/2;  
}
cout <<ans << "akash " ;
}