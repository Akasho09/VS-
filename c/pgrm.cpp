#include <iostream>
using namespace std ;


class Solution {
public:
bool compare (string s,int j){
int k=j-1;
while (k>=0){
if (s[j]==s[k]){
return false; 
}
k--;
}
return true;
}

int lengthOfLongestSubstring(string s) {
        int n=0;
        while (s[n]!='\0'){
            n++;
        }
int ans=1;
        for (int i=0;i<n;i++){
int count =1;
for (int j=i+1;j<n;j++){
if (compare (s , j)){
    count ++;
}
else {
     if (count > ans){
ans = count;
     break;   
    }
}
}
}
}
// return ans;
}
;
int main (){
    string s;
  //  lengthOfLongestSubstring(s);

} 