#include <iostream>
#include <vector>
using namespace std ;
int main () {
vector <int> v  ;
v.push_back(0);
cout << v.size () <<endl;
cout << v.capacity () <<endl;
v.push_back(2);
cout << v.size () <<endl;
cout << v.capacity () <<endl;
v.push_back(4);
cout << v.size () <<endl;
cout << v.capacity () <<endl <<endl;

cout << v.at(1) <<endl;
cout << v.front () <<endl;
cout << v.back () <<endl;
cout << v.empty () <<endl;
v.pop_back () ;
cout << v.back () <<endl <<endl;
vector <int> last (v);

cout << last.size () <<endl;
cout << last.capacity () <<endl <<endl;

cout << last.at(1) <<endl;
cout << last.front () <<endl;
cout << last.back () <<endl;
cout << last.empty () <<endl;


cout << "HIIII" <<endl;
vector <int> v1;

vector<int> name(10, 4); 

// vector<int> numbers = {10, 20, 30};
for (int i=0;i<name.size();i++)
cout << " " <<name[i];
}