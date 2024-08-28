#include <iostream>
using namespace std;
int getps(int *at,int time,int n,int done ){
    int c=0;
    for (int i=done;i<n;i++){
if (at[i]>time){
c++;
}
}
return c;
}
int getlowestbtp(int *bt,int time,int n,int done ){
    int mintime=10000;
for (int i=done;i<n;i++){
if (bt[i]>mintime){
mintime=bt[i];
}
}
}
int main (){
int p[10],at[10],bt[10];
int n;
cin>>n;
for (int i=0;i<n;i++){
cin >> p[i]>>at[i]>>bt[i];
}
int time =0;
int done =0;
//get ready p's
int c=getps(at,time,n,done);
//get lowest bt p
int g=getlowestbtp(at,time,n,done);

}