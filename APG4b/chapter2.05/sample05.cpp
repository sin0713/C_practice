#include <bits/stdc++.h>
using namespace std;

bool has_divisor(int n, int i) {
  if (i == n) {
    return false;
  }

  if (n % i == 0) {
    return true;
  }

  return has_divisor(n, i + 1);
}

bool is_prime(int n) {
  if (n == 1) {
    return false;
  }

  if (n == 2) {
    return true;
  }

  return !has_divisor(n, 2);

}

int main() {
  int N;
  cin >> N;

  cout << is_prime(N) << endl;
}

