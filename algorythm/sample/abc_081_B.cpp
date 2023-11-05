#include <iostream>
#include <vector>
using namespace std;

bool isAllEven(vector<int> target) {
  for (int i = 0; i < target.size(); i++) {
    int res = target[i] % 2;
    if (res == 1) {
      return false;
    }
  }

  return true;
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int res = 0;
  while(isAllEven(A)) {
    res++;
    for(int i = 0; i < A.size(); i++) {
      A[i] /= 2;
    }
  }

  cout << res << endl;

  return 0;
}
