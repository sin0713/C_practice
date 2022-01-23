#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
const long long INF = 1 << 20;

int main() {
  int N, T, A;
  cin >> N;
  cin >> T >> A;

  vector<int> H(N + 1);
  for(int i=0; i<N; i++) cin >> H[i];

  int palace_place = 0;
  double min_temp = INF;

  for (int i=0; i<N; i++) {
    double average = T - H[i] * 0.006;
    double diff = abs(A - average);
    if (diff < min_temp) {
      min_temp = diff;
      palace_place = i + 1;
    }
  }

  cout << palace_place << endl;
}


