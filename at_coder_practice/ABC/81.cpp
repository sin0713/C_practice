#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  int N;
  cin >> N;

  bool res = false;

  for (int i = 1; i<10; i++) {
    for (int j = 1; j<10; j++) {
      int sum = 0;
      sum = i * j;
      if (sum == N) res = true;
    }
  }

  if (res) cout << "Yes" << endl;
  else cout << "No" << endl;
}