#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> A(N);
  vector<long long> B(N);
  for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

  int sum = 0;
  for (int i = N - 1; i >= 0; i--) {
    A[i] += sum;

    int add = 0;
    long long res = A[i] % B[i];
    if (res != 0) {
      add = B[i] - res;
    }
    sum += add;
  }

  cout << "result " << sum << endl;

  return 0;
}