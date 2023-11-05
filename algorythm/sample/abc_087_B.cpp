#include <iostream>
#include <vector>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A;
  int B;
  int C;
  int X;

  cin >> A >> B >> C >> X;

  int ans = 0;
  rep(i, A + 1) {
    rep(j, B + 1) {
      rep(k, C + 1) {
        int res = 500 * i + 100 * j + 50 * k;
        if (res == X) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}