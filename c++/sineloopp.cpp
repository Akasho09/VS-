#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = 3, m = 4;
    int c = n * m;
    int array[30];
    int j = 0;

        for (; j < m;)
        {
            for (int i = 0; i < n; i++)
            {
array[c]=arr[i][j]; 
           cout <<array[c] <<"  ";    
            }
            j++;
            for (int i = n - 1; i >= 0; i--)
            {
array[c]=arr[i][j];  
     cout <<array[c] << "  ";
            }
            j++;
        }
}
