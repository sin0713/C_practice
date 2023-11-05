#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  sort(a.begin(), a.end());

  int ans = 0;
  rep(i, N) {
    int x = a[i] + M;
    vector<int>::iterator iterator = lower_bound(a.begin(), a.end(), x);
    int xPosition = distance(a.begin(), iterator);
    int res = xPosition - i;
    ans = max(ans, res);
  }

  cout << ans << endl;

  return 0;
}