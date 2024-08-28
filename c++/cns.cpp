#include <iostream>
using namespace std;
int consecutiveNumbersSum(int n) {
        int c=1;
 for(int i=0;i<=(n+1)/2;i++){
        int no=i;
        cout<<"no" <<"    " <<"c" <<"   " <<"j" <<endl;
        for(int j=i+1;j<=(n+1)/2;j++){
            cout<<no <<"    " <<c <<"   " <<j <<endl;
        no+=j;
        if(no==n){
        c++;
        break;
        }
        else if(no>n){
            break;
        }
        }
        }
        return c;
       }
int main (){
cout<<consecutiveNumbersSum(15); 
}