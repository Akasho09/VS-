#include <iostream>
using namespace std;

int peak(int arr[], int arrSize) {
  int s = 0;
  int e = arrSize - 1;
  int m = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (arr[m - 1] < arr[m] && arr[m] > arr[m + 1]) {
      ans = m;
      break;
    } else if (arr[m] < arr[m + 1]) {
      s = m + 1;
    } else {
      e = m - 1;
    }
    m = s + (e - s) / 2;
  }

  return ans;
}

int main() {
  int array[10] = {0, 1, 2, 3, 4, 5, 7, 2, 1, 0};
  cout << peak(array, 10);

  return 0;
}
