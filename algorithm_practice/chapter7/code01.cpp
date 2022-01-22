#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const vector<int> values = {500, 100, 50, 10, 5, 1};

int main() {
  int X;
  vector<int> a(6);

  cin >> X;
  for (int i = 0; i < 6; i++) cin >> a[i];

  int res = 0;
  for (int i = 0; i < 6; i++) {
    int add = X / values[i];

    if (add > a[i]) add = a[i];

    X -= values[i] * add;
    res += add;
  }

  cout << res << endl;
}