#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
int L;
vector<string> s;

int main() {
  cin >> N >> L;
  s.resize(N);
  rep(i, N) cin >> s[i];

  sort(s.begin(), s.end());

  string ans = "";
  rep(i, N) {
    ans += s[i];
  }

  cout << ans << endl;

  return 0;
}