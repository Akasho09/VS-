#include <iostream>
using namespace std;

void sort(int arr[],int n){
  int start =0;int end=n-1;
  while(start<=end){
    
if(arr[start]==1 && arr[end]==0){
  swap(arr[start],arr[end]);
start++; end--;
}
    else{
      start++;end--;
    }
  }
   for(int j=0;j<n;j++){
    cout<<arr[j] <<" "; }
    }

int main() {
int Arr[10];
  int n;
  cin>>n;
  for(int j=0;j<n;j++){
    cin>>Arr[j];
  }
 sort(Arr, n);
}