#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;



int main() {
  int y = 700;
  string S;
  cin >> S;
  for (int i = 0; i < 3; i++) {
    if (S[i] == 'o') y += 100;
  }

  cout << y << endl;
}
