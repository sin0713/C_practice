#include <bits/stdc++.h>
using namespace std;
//arg A
//return A~Bの総和
//処理 


int sum_range(int a, int b) {
  if (a == b) {
    return a;
  }

  int s = sum_range(a + 1, b );

  return a + s;
}

int main() {
  cout << sum_range(5, 7) << endl;
}


