#include<iostream>
using namespace std;
int main(){
cout<<"Name:-MOHD.SAQIB\n Roll No:-22BCS059\n\n";
int *arr=new int[10];
cout<<"enter array elements:\n";
for(int i=0;i<10;i++){
cin>>arr[i];
}
cout<<"The array elements are:\n";
for(int i=0;i<10;i++){
cout<<*(arr+i)<<" ";
}
int sum=0;
for(int i=0;i<10;i++){
sum=sum+*(arr+i);
}
cout<<"\nthe sum of array elements is:\n"<<sum;
delete []arr;
return 0;
}
