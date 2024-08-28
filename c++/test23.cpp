#include <iostream>
using namespace std;
int pivot (int arr[],int n){
  int s=0;int e=n-1;
  int s1=0;int s2=0;
s1=s1+arr[s];
s2=s2+arr[e];
  while(s+1<e-1){
if(s1>s2){
  s2=s2+arr[e-1];
e--;
  }
   if(s1<s2){
  s1=s1+arr[s+1];
s++;
  } 
if(s1==s2) {
  s2=s2+arr[e-1];
  s1=s1+arr[s+1];
e--;
s++;
  }
  }
  if((s1-arr[e]==s2-arr[s])&&(e==s)){
    return s+1;
  }
  else{
    return -1;
  }
}
int main() {
  int arr[20];
  int n;
  cin>>n;
  for(int j=0;j<n;j++){
    cin>>arr[j];
}
  cout<<pivot(arr, n);
}
