#include <iostream>
using namespace std;
int main (){
    int n;
    cin >>n;
int *array = new int (n);
int e=0;
for (int i=0;i<n;i++){
    cin>>array[i];
    e+=array[i];
}
for (int i=0;i<n;i++){
    cout <<"[" <<array[i] <<"]" <<" ";
}
int m;
cin >>m;

int s=0;
int mid =s+(e-s)/2;
while (s<=e){

}

}