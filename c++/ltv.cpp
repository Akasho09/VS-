#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    if (nums[n - 1] < n)
    {
        return true;
    }
    return false;
}

int main ()
{
    int n;
    cin >> n;
    vector<int> *vtr = new vector<int>();
    // cout <<"\nsize : " <<sizeof(*vtr) <<endl;
vtr->push_back(0);
vtr->push_back(11);
vtr->push_back(78);
vtr->push_back(4);
vtr->push_back(2);


    for (int i = 0; i < n; i++)
    {
        cout << vtr->at(i) << "   ";
    }
    cout << endl;

    sort(vtr.begin(), vtr.end());
    for (int i = 0; i < n; i++)
    {
        cout << vtr->at(i) << "   ";
    }
    cout << endl;
delete vtr;
    // cout  << containsDuplicate(vtr);
}