// CPP code to illustrate
// erase(iterator pos)

#include <iostream>
#include <string>
using namespace std;

int isAnagram(string s, string t) {
        int ans=0;
        if (t.length()!=s.length())
        return false;
for (int i=0;i<s.length();i++){
    cout <<"  i  " <<i <<"  " <<s[i] <<endl;
    for (int j=0;j<t.length();j++){
            cout <<"  j " <<i <<"  " <<t[j] <<endl;

        if (s[i]==t[j]){
s.erase (s.begin()+i);i--;
t.erase (t.begin()+j);
ans=1;
break ;
}
ans=0;
}
if (ans==0){
    return false ;
}
cout <<endl;
}
return ans;
}

/*

// Function to demo erase
void eraseDemo(string str)
{
	// Deletes character at position 4
	str.erase(str.begin() + 4);

	cout << "After erase : ";
	cout << str;
}

*/
// Driver code
int main()
{
/*	string str("Hello World!");

	cout << "Before erase : ";
	cout << str << endl;
	eraseDemo(str);

	cout <<endl <<str << endl;
    cout <<str[1] <<"  " <<str[8] <<endl;

	str.erase(str.begin() + 4);
	cout <<endl <<str << endl;
cout <<str[1] <<"  " <<str[8] <<endl;
*/
string st;
string ts;
cin >>st >>ts;
cout << isAnagram(st , ts);
	return 0;
}
