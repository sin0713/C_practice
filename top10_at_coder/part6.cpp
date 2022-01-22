#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a[i];

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  //sort(a, a + N, greater<int>());

  int a_sum = 0;
  int b_sum = 0;
  int res = 0;

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      a_sum += a[i];
    } else {
      b_sum += a[i];
    }
  }

  res = a_sum - b_sum;
  cout << res << endl;
}
