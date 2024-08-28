#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string str="akashahmadmalik";
                                           // (quoting Alfred N. Whitehead)
 string str2 = str.substr (3,5);     // "think"
/* 
  size_t pos = str.find("live");      // position of "live" in str

  string str3 = str.substr (pos);     // get from "live" to the end
*/
  cout << str2 << ' ' << '\n';

  return 0;
}
 /*#include <iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n=s.length();
  int i=n;
  int p=1;
  while(i>=0){
      if(s[i]=='.'){
        i--;
        break;
      }
    else{
    i--;p++;
    }
    for(int k=i;k<=p+i;k++){
cout<<s[k];
  }
  }
    cout << ".";
}*/
/*
#include <iostream>
using namespace std ;
int main (){
    string s;
    cin >>s;
int n =s.length();
    int c=0;
    int i=n;
    while (i>=0){
    int p=1;
    i--;
//length of every word 
    for (;i>=0;)
    {
    if (s[i]=='.'){
        break;
        i--;
        }
        else {
        p++;
        i--;
        }
        }
        //printing every word 
        int j=i+1;
        for (;j<i+p;j++)
        {
        cout <<s[j];
        }
        cout <<".";
        }}

*/