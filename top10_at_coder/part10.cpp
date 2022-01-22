#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> t(1 << 20), x(1 << 20), y(1 << 20);
  t[0] = x[0] = y[0] = 0;

  for (int i = 0; i < N; i++) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

  bool can = true;
  for(int i = 0; i < N; i++) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);

    if (dist > dt) can = false;
    if (dt % 2 != dist % 2) can = false;
  }

  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;

}
