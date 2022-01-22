#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  long long Y;

  cin >> N >> Y;

  int res_10000 = -1;
  int res_5000 = -1;
  int res_1000 = -1;

  for (int a = 0; a < N; a++) {
    for (int b = 0; b < N; b++) {
      int c = N - a - b;
      long long total = 10000 * a + 5000 * b + 1000 * c;

      if (Y == total) {
        res_10000 = a;
        res_5000 = b;
        res_1000 = c;
      }

    }
  }

  cout << res_10000 << " " << res_5000 << " " << res_1000 << endl;
}
