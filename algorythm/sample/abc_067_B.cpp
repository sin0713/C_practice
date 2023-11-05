#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
int K;
vector<int> l;

int main() {
  cin >> N >> K;
  l.resize(N);
  rep(i, N) cin >> l[i];

  sort(l.rbegin(), l.rend());

  int ans = 0;
  rep(i, K) {
    ans += l[i];
  }

  cout << ans << endl;

  return 0;
}