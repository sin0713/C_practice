#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const long long INF = 1 << 20;

int main() {
  int N;
  cin >> N;

  vector<long long> h(N), s(N);

  for (int i = 0; i < N; i++) cin >> h[i] >> s[i];

  long long left = 0, right = INF;
  while(right - left > 1) {
    
    long long mid = (right + left) / 2;

    bool ok = true;
    vector<long long> T(N, 0);

    for (int i = 0; i < N; i++) {
      if (mid < h[i]) ok = false;
      else T[i] = (mid - h[i]) / s[i];
    }

    sort(T.begin(), T.end());
    for (int i = 0; i < N; i++) {
      if(T[i] < i) ok = false;
    }
    
    if(ok) right = mid;
    else left = mid;
  }

  cout << right << endl;
}
