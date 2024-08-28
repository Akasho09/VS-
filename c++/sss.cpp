#include <iostream>
using namespace std ;
vector<int> wavePrint(vector<int>&arr)
{    vector <int>ans ;
   int  nRows=arr.size();
int  mCols=arr[0].size();
    int j=0;
    for (;j<mCols;){
        for (int i=0;i<nRows;i++){
ans.push_back(arr[i][j]);
        }
j++;
 for (int i=nRows-1;i>=0;i--){
ans.push_back(arr[i][j]);
    }
     j++;
    }
   return ans;
}
int main (){
vector<int>v;
for (int i = 1; i <= 5; i++){
        v.push_back(i);
}
cout << wavePrint (v);



}

