#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{2, 4, 4, 4, 4, 4, 46, 8, 10};
  int target = 4;

  int start = 0;
  int end = arr.size() - 1;
  int ans1 = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2; // Calculate mid properly.

    if (arr[mid] == target) {
      ans1 = mid;
      end = mid - 1; // Update end to search for the first occurrence.
    } else if (target > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  int ans2 = -1; // Initialize ans2 to -1 for the last occurrence.
  start = 0;     // Reset start and end for the second search.
  end = arr.size() - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2; // Calculate mid properly.

    if (arr[mid] == target) {
      ans2 = mid;
      start = mid + 1; // Update start to search for the last occurrence.
    } else if (target > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  cout << "First occurrence of " << target << " is at index: " << ans1 << endl;
  cout << "Last occurrence of " << target << " is at index: " << ans2 << endl;

  return 0;
}
