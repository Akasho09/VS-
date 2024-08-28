#include <iostream>
using namespace std;
    int pivotIndex(vector<int>& nums) {
        int ans=4;
        int arraysum=0;
        for (int i=0;i<nums.size();i++){
    arraysum+=nums[i];}
        int sum1=0;
for (int i=0;i<nums.size();i++){
    sum1+=nums[i];
cout <<ans <<"  " <<sum1 <<"  " <<arraysum <<endl;

    if (sum1==(arraysum-nums[i+1])/2){
        ans=i+1;
        return ans;
    }
}

}
int main (){
int arr[] = { 10, 20, 30 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    vector<int> vector(arr, arr + n);

    cout <<pivotIndex(vector);

}