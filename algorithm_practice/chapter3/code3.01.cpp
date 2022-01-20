#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, v;
  cin >> N >> v;

  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a.at(i);

  bool exist = false;

  for (int c : a) {
    if (c == v) {
      exist = true;
    }
  }

  cout << exist << endl;
}
