#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> m(N);
  for(int i=0; i<N; i++) cin >> m[i];

  int sum = 0;

  for (int i=0; i<N; i++) sum += m[i];
  int rest = X - sum;

  sort(m.begin(), m.end());
  int res = 0;
  for (int i = 0; i<N; i++) {
    if (rest > m[i]) {
      res += rest / m[i];
      rest %= m[i];
    } else break;
  }

  cout << res + N << endl;



}