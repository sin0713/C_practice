#include <iostream>
#include <vector>
using namespace std;

int how_many_times(int N) {
  int cnt = 0;
  while(N % 2 == 0) N / 2, cnt++;
  return cnt;
}

int main() {
  int N, v;
  cin >> N >> v;
  vector<int> A(N);

  for (int i = 0; i < N; i++) cin >> A.at(i);

  int result = 1234567890;

  for (int i = 0; i < N; i++) {
    result = min(result, how_many_times(A[i]));
  }

  // for (int a : A) {
  //   result = min(result, how_many_times(a));
  // }

  cout << result << endl;
}
