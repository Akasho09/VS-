#include <iostream>
#include <vector>
#include <algorithm>

// Function to perform sorting
void sortVector(std::vector<int>& myVector) {
    std::sort(myVector.begin(), myVector.end());
}

int main() {
    // Example usage
    std::vector<int> myNumbers = {5, 2, 8, 1, 3};

    std::cout << "Before sorting: ";
    for (const auto& num : myNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Call the sorting function
    sortVector(myNumbers);

    std::cout << "After sorting: ";
    for (const auto& num : myNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
