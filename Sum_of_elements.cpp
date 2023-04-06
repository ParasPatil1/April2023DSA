#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int i;
  int n = 4;
  int arr[4] = {1, 2, 3, 4};
  int min = INT_MAX;
  int max = INT_MIN;
  for (i = 0; i <= n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  cout << endl << "Minimum element is :" << min << endl;

  for (i = 0; i <= n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << endl << "Maximum element is :" << max << endl;
  return 0;
}
