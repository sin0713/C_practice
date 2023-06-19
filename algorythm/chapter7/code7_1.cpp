#include <iostream>
#include <vector>
using namespace std;

const vector<int> coins = {1, 5, 10, 50, 100, 500};

int main() {
  int X;
  cin >> X;

  vector<int> a(coins.size(), 0);
  for (int i = coins.size() - 1; i > -1; i--) cin >> a[i];

  int result = 0;
  for (int i = coins.size() - 1; i > -1; i--) {
    int add = X / coins[i];
    if (add > a[i]) add = a[i];

    cout << coins[i] << ": " << add << endl;

    result += add;
    X -= add * coins[i];
  }

  cout << "result " << result << endl;

  return 0;
}