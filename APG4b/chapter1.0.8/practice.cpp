#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  int price;
  int N;
  string text;

  cin >> p;

  if (p == 1) {
    cin >> price;
    cin >> N;

    cout << price * N << endl;
  }

  // パターン2
  if (p == 2) {
    cin >> text;
    cin >> price;
    cin >> N;
    cout << text + "!" << endl;
    cout << price * N << endl;
  }
}

