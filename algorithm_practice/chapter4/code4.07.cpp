#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> F(N + 1);
  F[0] = 0, F[1] = 1;
  for (int i = 2; i <= N; i++) {
    F[i] = F[i-2] + F[i-1];

    cout << F[i] << endl;
  }
}

