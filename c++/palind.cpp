#include <iostream>
using namespace std;
    bool isPalindrome(string s) {

int i=0;
while(i<s.size()){
 if(s[i]>=65 && s[i]<=90){
              s[i] = s[i]+32;
            }
            else  if((s[i]>=97 && s[i]<=122) || s[i]>=48 && s[i]<=57){
 
            }
            else{
            s.erase (s.begin() +i);
            i--;
            }
            i++;
}
cout <<s;
i=0;
int e=s.size()-1;
while(i<=e){
// if(s[i]==' ')
//  { i++;
//  }
//  if(s[e]==' ')
//  { e--;
//  }
if(s[i]!=s[e]){
return false;
} 
            i++;e--;  
        }
        return true;
    }
    int main(){
        string s="Marge, let's \"[went].\" I await {news} telegram."
;
  cout<<    isPalindrome(s);  
    }