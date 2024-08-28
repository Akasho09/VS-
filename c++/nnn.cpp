#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers with 5 elements, each initialized to true
    std::vector<int> myVector(5,1);

    // Display the elements of the vector
    std::cout << "Elements in the vector: ";
    for (size_t i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }

    return 0;
}
