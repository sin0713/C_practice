#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long INF = 1LL << 60;
vector<int> a = {3, 5, 8, 10, 14, 17, 21, 39};
vector<int> b = {2, 10, 8, 3, 9, 5, 6, 2};
const vector<int> c = {1, 2, 3, 4, 5, 6};


int main() {
  int K;
  cin >> K;

  // bをソート
  sort(b.begin(), b.end());

  int result = 300;
  for (int i = 0; i < a.size(); i++) {
    auto iterator = lower_bound(b.begin(), b.end(), K - a[i]);
    int value = *iterator;

    long long temp = INF;
    if (value > 0) {
      temp = value + a[i];
    }

    if (result > temp) {
      result = temp;
    }
  }

  cout << "result " << result << endl;
  return 0;
}