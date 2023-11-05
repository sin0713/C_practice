#include <iostream>
#include <vector>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
int A;
int B;

bool check(int value) {
  return value >= A && value <= B;
}

int sumValue(int value) {
  int res = 0;
  int n = value;
  while(n != 0) {
    res += n % 10;
    n /= 10;
  }

  return res;
}

int main() {
  cin >> N >> A >> B;

  int ans = 0;
  rep(i, N+1) {
    if (check(sumValue(i))) {
      ans += i;
    }
  }

  cout << ans << endl;

  return 0;
}