#include <iostream>
#include <vector>
using namespace std;  

int main (){
vector <int>v;
int n=5,v1;
for (int i=0;i<n;i++){
    cin>>v1;
    v.push_back(v1);
}
int k=2;
int sum=0;
        for (int i=0;i<v.size();i++){
            sum+=v[i];
        }
        cout<<sum <<"   " <<endl;
        int ans;
        int s=0;
        int m=s+(sum-s)/2;
        int count =0;
       int pagesum=0;
        while (s<sum){
int c=0;
            while(count <v.size()){
 cout<<"pagesum" <<"\t" <<"count" <<"\t" <<"c" <<"\tans" <<endl;

while (pagesum<m) {
            cout<<pagesum <<"\t" <<count <<"\t" <<c <<"\t" <<ans <<"\t" <<m <<endl;
    pagesum=pagesum+v[count];
count++;
}
c++;
pagesum=0;
}
if (c>k){
    cout<<"c>k" <<endl;
    sum=m-1;
    m=s+(sum-s)/2;
}
else {
        cout<<"c<=k" <<endl;
    ans=m;
        s=m+1;
        m=s+(sum-s)/2;
 }
    }
cout <<ans;
    }