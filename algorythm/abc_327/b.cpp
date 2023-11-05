#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long B;
  cin >> B;

  int i = 1;
  int ans = -1;
  while(i < 16) {
    long long x = 1;
    for (int j = 0; j < i; j++) {
      x *= i;
    }
    if (x == B) {
      ans = i;
      break;
    }

    i++;
  }

  cout << ans << endl;

  return 0;
}