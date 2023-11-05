#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
vector<int> a;

int main() {
  cin >> N;
  a.resize(N);
  rep(i, N) cin >> a[i];

  // 降順ソート
  sort(a.rbegin(), a.rend());

  int alice = 0;
  int bob = 0;
  rep(i, N) {
    if (i % 2 == 0) {
      alice += a[i];
      continue;
    }

    bob += a[i];
  }

  int ans = alice - bob;

  cout << ans << endl;

  return 0;
}