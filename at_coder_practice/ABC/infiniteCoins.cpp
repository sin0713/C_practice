#include <iostream>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  bool res = true;

  if (N % 500 != 0) {
    if (N % 500 > A) res = false;
  }

  if (res) cout << "Yes" << endl;
  else cout << "No" << endl;
}