#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char hd[15];
    cin >> hd;
    cout << hd << endl;
    
    int n = 0;
    while (hd[n] != '\0') {
        n++;
    }
    cout << n << endl;
    
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        int c = hd[i];
        cout << c << " " << ans << endl;
        if (c < 58) {
            int p = c - '0'; // Convert from character to integer
            ans = p * pow(16, n - i - 1) + ans;
            cout << c << " " << ans << endl;
        } else {
            int t = toupper(c) - 'A' + 10; // Convert from character to integer
            ans = t * pow(16, n - i - 1) + ans;
            cout << c << " " << ans << endl;
        }
    }
    cout << ans;
    
    return 0;
}