#include <iostream>
using namespace std;
int main() {
    // Declare a 3D array of dimensions 5x10x30
    int *array[5][10][30];

    // Initialize the array using pointers
        *array[2][3][4] = 76; // You can replace this with the desired initialization value

    // Access and print a value to verify the initialization
    std::cout << "Initialized value at array[2][3][4]: " << *array[2][3][4] << std::endl;

int *A[10][10][2];
*A[9][9][1]=19;
cout <<*A[9][9][1];
    return 0;
}
