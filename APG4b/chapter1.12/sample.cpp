#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  int x = 1;
 
  for (int i = 0; i < S.size(); i++) {
    if (i % 2 == 0) {
      continue;
    }

    if (S.at(i) == '+') {
      x += 1;
    } else {
      x -= 1;
    }
  }

  cout << x << endl;
}