#include <iostream>
#include <vector>
using namespace std;
const int INF = 2000000;

int main() {
  int N, v;
  cin >> N >> v;
  vector<int> a(N);

  for (int i = 0; i < N; i++) cin >> a.at(i);

  int second_min_num = INF;
  int min_num = INF;

  for (int i = 0; i < N; i++) {
    if (min_num > a[i]) {
      second_min_num = min_num;
      min_num = a[i];

    } else if (second_min_num > a[i]) {
        second_min_num = a[i];
      }
  }

  cout << second_min_num << endl;
}