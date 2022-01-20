#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long fibo(int N) {
  if (N == 0) return 0;
  else if (N == 1) return 1;

  if (memo[N] != -1) return memo[N];

  return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main() {
  int N;
  cin >> N;

  memo.assign(50, -1);
  
  fibo(N);

  for (int i = 0; i < N; i++) {
    cout << memo[i] << endl;
  }
}
