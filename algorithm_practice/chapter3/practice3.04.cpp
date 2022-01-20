#include <iostream>
#include <vector>
using namespace std;
const int INF = 2000000;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a[i];

  int max_num = 0;
  int min_num = INF;

  for (int i = 0; i < N; i++) {
    if (max_num < a[i]) {
      max_num = a[i];
    }
    if (min_num > a[i]) min_num = a[i];
  }

  cout << max_num - min_num << endl;

}