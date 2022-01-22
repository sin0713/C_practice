#include <iostream>
#include <vector>
using namespace std;

const int N = 8;
const vector<int> a = {3, 5, 8, 10, 14, 17, 21, 39};

int binary_search(int key) {
  int left = 0;
  int right = (int)a.size() - 1;
  int i = 0;

  while(right >= left) {
    int mid = left + (right - left) / 2;
    cout << i << "回目の更新： " << left << endl;

    if (a[mid] == key) return mid;
    else if (a[mid] > key)  right = mid - 1;
    else if (a[mid] < key)  left = mid + 1, i++;
  }

  return -1;
}

int main() {
  cout << binary_search(21) << endl;
}
