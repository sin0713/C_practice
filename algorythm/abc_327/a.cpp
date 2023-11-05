#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
string S;

int main() {
  cin >> N >> S;

  vector<int> a;
  vector<int> b;
  for (int i = 0; i < (int)S.size(); i++) {
    if (S[i] == 'a') {
      a.push_back(i);
    } else if (S[i] == 'b') {
      b.push_back(i);
    }
  }

  bool ans = false;
  rep(i, a.size()) {
    rep(j, b.size()) {
      int res = abs(a[i] - b[j]);
      if (res == 1) {
        ans = true;
        break;
      }
    }
  }

  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}