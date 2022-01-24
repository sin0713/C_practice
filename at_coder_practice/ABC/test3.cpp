#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  double sum = 0.0;
  int res = 0;
  double i = 1.0;
  double n = 0.0;

  while (sum < 15) {
    n = 1.0 / i;
    sum = sum + n;
    res = i;
    i = i + 1;
  }


  cout << res << endl;
  cout << sum << endl;
}