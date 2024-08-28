// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	// Assign vector 
    vector<int> v; 
  
    // fill the vector with 10 five times 
    v.assign(5, 10); 
  // vector<int> name(10, 4);
  //   cout << "The vector elements are: "; 
  //   for (int i = 0; i < v.size(); i++) 
  //       cout << v[i] << " "; 
  //        for (int i = 0; i < name.size(); i++) 
  //       cout << name[i] << " "; 

        vector <vector <int> > vv;
        // vv.push_back({1,2});
        // cout <<vv[0];
        // vv.assign(5,{10});
        // vector<vector<int>> vv{ { 1, 2, 3 }, 
        //                  { 4, 5, 6 }, 
        //                  { 7, 8, 9, 4 } };
     vv.push_back(v);

         for (int i = 0; i < vv[0].size(); i++) 
        cout << vv[0][0] << " ";

} 
