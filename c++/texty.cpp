#include <iostream>
using namespace std;
int search(vector<int>& nums, int target) {
int ans;
int s=0;
int e=nums.size()-1;
int m=s+(e-s)/2;
while(s<=e){
     cout <<"w :" <<ans <<endl;
    if (nums[m-1]<nums[m] && nums[m+1]<nums[m]){
    cout <<"i :" <<ans <<endl;
    ans = m;
    break;
    }
    else if (nums[m]>nums[0]){
    s=m+1;
    }
    else{
    e=m;
    }
m=s+(e-s)/2;
}
cout <<"1 :" <<ans <<endl;
if (target>nums[0] && target <nums[ans]){
s=0;
e=ans;
}
else {
s=ans;
e=nums.size()-1;
}
cout <<"2 :" <<s <<"  " <<e <<endl;

m=s+(e-s)/2;
while(s<=e){
    if (nums[m]==target){
ans=m;
break;
    }
    else if (nums[m]<target){
        s=m+1;
    }
    else{
    e=m;
    }
m=s+(e-s)/2;
}
return m;
}
int main (){
    int arr[] = { 6,7,8,1,2,4,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>nums(arr, arr + n);
    cout <<search(nums,5);
}