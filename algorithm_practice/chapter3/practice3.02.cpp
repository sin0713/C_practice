#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, v;
  cin >> N >> v;
  vector<int> a(N);

  for (int i = 0; i < N; i++) cin >> a.at(i);

  int cnt = 0;

  for (int i = 0; i < N; i++) {
    if (a[i] == v) {
      cnt++;
    }
  }

  cout << cnt << endl;
}
