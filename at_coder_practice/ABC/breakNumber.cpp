#include <iostream>
#include <math.h>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  int N;
  cin >> N;

  int max_cnt = -1;
  int res = 0;
  for (int x = 1; x < N + 1; x++) {
    int cnt = 0;
    int y = x;
    while (y % 2 == 0) {
      cnt ++;
      y /= 2;
    }

    if (max_cnt < cnt) {
      max_cnt = cnt;
      res = x;
    }
  }

  cout << res << endl;
}
