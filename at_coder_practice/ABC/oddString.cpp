#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  string s;
  cin >> s;

  string res = "";
  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0) res += s[i];
  }

  cout << res << endl;

}