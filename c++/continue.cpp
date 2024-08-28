 #include <iostream>
using namespace std;
  
int main()
{
    // loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
  
        // If i is equals to 4,
        // continue to next iteration
        // without printing
        if (i == 4)
            continue;
  
        else
            // otherwise print the value of i
            cout << i << " ";
    }
  
    return 0;
}