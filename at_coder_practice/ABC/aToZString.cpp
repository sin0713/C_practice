#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  string s;
  cin >> s;


  long long A = 1 << 20;
  int Z = -1;
  int res = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == 'A') {
      if(A > i) A = i;
    }

    if (s[i] == 'Z') {
      if (Z < i) Z = i;
    }
  }

  res = Z - A;

  cout << res + 1 << endl;
}
