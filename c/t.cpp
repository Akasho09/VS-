#include <iostream>
using namespace std;
bool valid(char ch){
  if((ch>='a'&&ch<='z' || ch>='A'&&ch<='Z') || ch>='0'&&ch<='9'){
return 1;
  }
  return 0;
}
int tolowercase(char ch){
  if(ch>= 'a' && ch<='z'){
return ch;
  }
    else{
    char temp=ch-'A'+'a';
      return temp;
    }
}
bool checkpalindrome(string str,int n){
  int s=0;
   int e=n-1;
while(s<=e){
  if(str[s]!=str[e]){
    return 0;
  }
  else{
    s++;e--;
  }
}
  return 1;
}
int main(){
  string s;
  cin>>s;
  string g;
  int p= s.length();
  for(int i=0;i<p;i++){
    if(valid(s[i])){
      g.push_back(s[i]);
      cout << "valid" <<endl;
    }
  }
  int n= g.length();
  for(int i=0;i<n;i++){
  char ch=g[i];
  tolowercase(ch);
  cout <<"lower" <<endl;
  }
  if(checkpalindrome(g,n)){
   cout<<"it is a palindrome"<<endl;
 }
  else {
    cout<<"not a palindrome"<<endl;
  }
return 0;
  }