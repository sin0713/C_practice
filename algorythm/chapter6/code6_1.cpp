#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;
const vector<int> list = {3, 5, 8, 10, 14, 17, 21, 39};

int find(int target) {
  int left = 0;
  int right = (int)list.size() - 1;

  while(right >= left) {
    cout << "right: " << right << endl;
    cout << "left: " << left << endl;

    int res = left + (right - left) / 2;

    if (list[res] == target) {
      return res;
    } else if (list[res] < target) {
      left = res + 1;
    } else if (list[res] > target) {
      right = res - 1;
    }
  }

  // 見つからない
  return -1;
}

int main() {

  cout << find(10) << endl;
  cout << find(3) << endl;
  cout << find(39) << endl;
}