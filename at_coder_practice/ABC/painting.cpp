#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  int W, H, N;
  cin >> W >> H >> N;

  vector<int> x(N);
  vector<int> y(N);
  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> x[i] >> y[i] >> a[i];

  int left = 0;
  int right = W;
  int bottom = 0;
  int top = H;
  
  for (int i = 0; i<N; i++) {
    if (a[i] == 1)      left = max(left, x[i]);
    else if (a[i] == 2) right = min(right, x[i]);
    else if (a[i] == 3) bottom = max(bottom, y[i]);
    else if (a[i] == 4) top = min(top, y[i]);
  }

  if (right <= left || top <= bottom) cout << 0 << endl;
  else cout << (right - left) * (top - bottom);
}
