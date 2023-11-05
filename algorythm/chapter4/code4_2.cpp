#include <iostream>
using namespace std;


int func(int n) {
  cout << "func(" << n << ")を呼び出し" << endl;

  if (n == 0) return 0;

  int result = n + func(n - 1);
  cout << n << "までの総和" << result << endl;

  return result;
}

int main() {
  func(5);
}