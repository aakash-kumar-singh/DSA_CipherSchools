#include<iostream>
using namespace std;

// Function to find the first occurrence of a key using binary search
int firstOccur(int *arr, int n, int key) {
  int start = 0;
  int end = n - 1;
  int idx = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
      idx = mid;
      end = mid - 1; 
    }
    else if (arr[mid] < key) {
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }

  return idx;
}

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int key;
  cin >> key;

  int res = firstOccur(arr, n, key);

  if (res != -1)
    cout << "First occurrence of " << key << " is at index " << res << endl;
  else
    cout << "Key not found" << endl;

  return 0;
}
