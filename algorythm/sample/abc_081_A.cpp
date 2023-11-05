#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;

  int res = 0;
  for (char c : s) {
    if (c == '1') {
      res++;
    }
  }

  cout << res << endl;

  return 0;
}