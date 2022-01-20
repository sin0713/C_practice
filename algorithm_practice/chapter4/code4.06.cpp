#include <iostream>
using namespace std;

int fibo(int N) {
  if ( N == 0) return 0;
  else if (N == 1) return 1;

  int result = fibo(N - 1) + fibo(N -2);

  return result;
}

int main() {
  int N;
  cin >> N;
  cout << fibo(N) << endl;
}
