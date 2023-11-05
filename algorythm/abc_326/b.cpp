#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  int max = 919;
  cin >> N;

  int ans = -1;
  for (int i = N; i <= max; i++) {
    int temp = i;

    int first = temp % 10;
    temp /= 10;
    int second = temp % 10;
    temp /= 10;
    int third = temp;

    int res = second * third;
    if (res == first) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;
  return 0;
}