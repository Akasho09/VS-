#include<iostream>
using namespace std;
int occ1(int arr[], int n, int k){
  int s=0;int e=n-1;
  int m=s+(e-s)/2;
int ans;
while(s<=e){
  if(arr[m]==k){
ans=m;
    e=m-1;
}
if(arr[m]>k){
  e=m-1;
}
  if(arr[m]<k){
s=m+1;
}
m=s+(e-s)/2;
}
  return ans;
}
int occ2(int arr[], int n, int k){
  int s=0;
  int e=n-1;
  int m=s+(e-s)/2;
int ans;
while(s<=e){
  if(arr[m]==k){
ans=m;
    s=m+1;
}
if(arr[m]>k){
  e=m-1;
}
  if(arr[m]<k){
s=m+1;
}
m=s+(e-s)/2;
}
  return ans;
}
int main() {
int arr[20];
  int n;
  cin>>n;
  int k;
  cin>>k;
    for(int j=0;j<n;j++){
cin >> arr[j];
    }
cout<<occ1(arr, n, k) << endl;
cout<<occ2(arr, n, k);

}