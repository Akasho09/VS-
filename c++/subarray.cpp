#include <iostream>
using namespace std;
int main(){
    int csum=0;
    int sum=0;
    int ans=0;
    int array[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    cout <<"csum" <<"    " <<"sum\t" <<"array\n";
    for(int i=0;i<n;i++){
    csum+=array[i];
    cout <<csum <<"        " <<sum  <<"     " <<array[i] <<endl;
    if (csum>=array[i]){
        sum=csum;
          if(sum>=ans){
        ans=sum; }
    }
    else {
    csum=0;
    sum=0;
    } 
    }
cout <<csum <<"    " <<sum; }
// int nums[6]={100,4,200,1,3,2};
// int ans=0;
//          int csum=0;
//          int sum=0;
//         for(int i=0;i<6;i++){
//     csum+=nums[i];
//     if (csum>=nums[i]){
//         sum++;
//         if(sum>=ans){
//         ans=sum;
//         }
//     }
//     else{
//     csum=0;
//     sum=0;
//     }
//     }
// cout<<sum;
//     }