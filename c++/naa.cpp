#include <iostream>
using namespace std;
int maxArea(vector<int>& height) {
        int ans=0;
        for (int i=0;i<height.size()-1;i++){
            for (int j=height.size();j>i;j--){
if (height[j]>=height[i]){
   if( ans<=height[i]*(j-i))
   {
    ans=height[i]*(j-i);
    break;
   } }
   else{
       
     if ((height[j]*(j-i)) >= ans)
   {
    ans=height[j]*(j-i);
   }
   }
}
            }
            return ans;
         }
int main (){ 
    vector<int>array;
    int n=3;
    for (int i=0;i<n;i++){
        int v1;
    cin>>v1;
    array.push_back(v1);
}
cout <<maxArea(array);
}
