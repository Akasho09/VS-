#include <iostream>
#include <string>

using namespace std;

string decimalToHexadecimal(int decimalNum) {
    string hexadecimalNum = "";
    char hexDigits[] = "0123456789ABCDEF";

    while (decimalNum > 0) {
        int remainder = decimalNum % 16;
        hexadecimalNum = hexDigits[remainder] + hexadecimalNum;
        decimalNum /= 16;
    }

    return hexadecimalNum;
}

int main() {
    // Input a decimal number
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    // Convert decimal to hexadecimal
    string hexadecimalNum = decimalToHexadecimal(decimalNum);

    // Print the result
    cout << "The hexadecimal representation of " << decimalNum << " is: " << hexadecimalNum << endl;

    return 0;
}
