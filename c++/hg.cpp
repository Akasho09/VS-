#include <iostream>
#include <string>
using namespace std;
int main()
{
string str("Hello World!");
string s ("World Hellj!");
int ans =1;
cout << ans <<endl <<endl;
for (int i=0;i<str.length();i++){
    cout <<"k" << ans <<endl;
ans =ans ^ str[i]^s[i];
cout << ans <<endl <<endl;
}

}