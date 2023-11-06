#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

int tribo(int N) {
  if (N == 0) return 1;
  else if (N == 1) return 0;
  else if (N == 2) return 5;

  if (memo[N] != -1) return memo[N];



  return memo[N] = tribo(N - 1) + tribo(N -2) + tribo(N - 3);
  
}

int main() {
  int N;
  cin >> N;

  memo.assign(N + 1, -1);

  cout << "第" << N << "項" << tribo(N) << endl;

}