#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int x;
  int y;

  cin >> x >> y;

  int res = y - x;
  if ((res > 0 && res <= 2)
    || (res < 0 && res >= -3)
  ) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}