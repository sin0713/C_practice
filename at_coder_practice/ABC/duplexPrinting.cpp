#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
using namespace std;

int main() {
  int N;
  cin >> N;

  int res = 0;
  if (N % 2 == 0) {
    res = N / 2;
  } else res = N / 2 + 1;
  cout << floor(N / 2) << endl;

  cout << res << endl;
}