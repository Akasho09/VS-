#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
int n=matrix.size();
int m=matrix[0].size();
    int s=0;
    int e=n-1;
int u=s+(e-s)/2;
while (s<e){
    if (n>1){
    if ((matrix [u][0]<=target &&  matrix [u+1][0]>=target)){
break;
    }
    else if (matrix [u][0]<target &&  matrix [u+1][0]<target){
    s=u+1;
    u=s+(e-s)/2; }
    else {
 e=u-1;
 u=s+(e-s)/2;
    }
}
else 
{
    u=0;
    break;
}
}
int p=0;
int q=m-1;
int r=p+(q-p)/2;
while (p<q){
 if (matrix [u][r]==target){
return true ;
break;
    }
    else if (matrix [u][r]<target){
        p=r+1;
    r=p+(q-p)/2;
    }
    else 
    q=r-1;
        r=p+(q-p)/2;
}
            return false;
    }
int main (){

   int m [3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
searchMatrix(m,5);

}