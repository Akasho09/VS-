#include <iostream>
using namespace std;
// vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int>answer;
//     int n=nums.size();
// 	int *pre = new int(n);
//     int *post= new int (n);
//     post[n]=1;
//     pre[0]=nums[0];
//     post[n-1]=nums[n-1];
//     int i=1;
//     for(int j=n-1;j>=0;j--){
//     pre[i]=pre[i-1]*nums[i];
//     post[j]=post[j+1]*nums[j];
//     i++;
//     }
//     int a=pre[0]*post[1];
//      answer.push_back(a);
//     cout<<answer[0] <<"  ";
//       for(int j=1;j<n;j++){
//         int p=pre[j-1]*post[j+1];
// answer.push_back(p);
// cout<<answer[j] <<"  ";
//  }
//   return answer;}
 int lengthOfLIS(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
        int count=1;
            if(nums[i+1]>nums[i] && i>0){
                continue;
            }
            else{
for(int j=i;j<nums.size();j++){
if(nums[j+1]>nums[j]){
    count++;
}
}
} 
if(count>ans){
    ans=count;
}
}
cout<<ans;
return ans;
}
int main(){
        vector<int>nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
nums.push_back(4);
lengthOfLIS(nums);

}