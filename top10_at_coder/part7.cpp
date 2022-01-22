#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i = 0; i < N; i++) cin >> d[i];

  vector<int> a(101, 0);

  for (int i = 0; i < N; i++) a[d[i]]++;


  int res = 0;
  for (int i = 0; i < 101; i++) {
    if (a[i] > 0) {
      res ++;
    }
  }

  cout << res << endl;
}
