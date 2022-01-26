#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  int N;
  cin >> N;

  bool res = false;
  pair<int, int> index;


  for (int i = 0; i <= 25; i++) {
    for (int j=0; j<=14; j++) {
      if (N < 4) break;
      int sum = 0;
      sum = 4 * i + 7 * j;
      if (sum == N) {
        index = make_pair(i, j);
        res = true;
        break;
      }
    }
  }

  if (res) {
    cout << "Yes" << endl;
    cout << index.first << " " << index.second << endl;
  } else cout << "No" << endl;
}
