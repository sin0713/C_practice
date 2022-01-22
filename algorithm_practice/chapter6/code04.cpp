#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 1 << 20;


int main() {
  int N, K;
  cin >> N >> K;

  vector<int> a(N), b(N);
  for (int i = 0; i < N; i++) cin >> a[i] >> b[i];

  int min_value = INF;
  sort(b.begin(), b.end());

  for (int i = 0; i < N; i++) {
    auto iter = lower_bound(b.begin(), b.end(), K - a[i]);
    int val = *iter;
    if (min_value > val + a[i]) {
      min_value = val + a[i];
    }
  }

  cout << min_value << endl;
}
