#include <iostream>
#include <vector>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n;
vector<int> a;
int K;

int main() {
  cin >> n;
  a.resize(n);
  rep(i, n) cin >> a[i];
  cin >> K;

  bool ans = false;
  for (int bit = 0; bit < (1<<n); bit++) {
    int res = 0;

    for (int i = n - 1; i >= 0; i--) {
      if (bit & (1<<i)) {
        res += a[i];
      }
    }

    if (res == K) {
      ans = true;
    }
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}