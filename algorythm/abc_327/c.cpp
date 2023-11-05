#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int> flags(9, 0);

void reset() {
  rep(i, 9) {
    flags[i] = 0;
  }
}

bool isInValid() {
  rep(i, 9) {
    if (flags[i] != 1) {
      return true;
    }
  }
  return false;
}

// main
int main() {
  vector<vector<int>> A(9, vector<int>(9));
  bool ans = true;

  rep(i, 9) {
    rep(j, 9) {
      cin >> A[i][j];
    }
  }

  // 行チェック
  rep(i, 9) {
    reset();
    rep(j, 9) {
      flags[A[i][j] - 1]++;
    }
    if (isInValid()) ans = false;
  }

  // 列チェック
  rep(j, 9) {
    reset();
    rep(i, 9) {
      flags[A[i][j] - 1]++;
    }
    if (isInValid()) ans = false;
  }


  // 3x3マスの移動
  rep(h, 3) {
    rep(i, 3) {
      reset();

      // 3x3チェック 本体
      rep(j, 3) {
        rep(k, 3) {
          int res = A[j + (3 * h)][k + (3 * i)];
          flags[res - 1]++;
        }
      }
      if (isInValid()) ans = false;
    }
  }


  //cout << "========================"  << endl;
  if (ans) {
    cout << "Yes"<< endl;
  } else {
    cout << "No"<< endl;
  }

  return 0;
}