#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  long x = 1;


  for (int i = 0; i < N; i++) {
    x *= 2;
  }

  cout << x << endl;

}