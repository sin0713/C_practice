#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  string S;
  string T;
  cin >> S >> T;

  vector<vector<long long>> dp(S.size() + 1, vector<long long>(T.size() + 1, INF));
  dp[0][0] = 0;

  for (int s = 0; s <= S.size(); s++) {
    for (int t = 0; t <= T.size(); t++) {
      if (s > 0 && t > 0) {
        if (S[s - 1] == T[t - 1]) {
          // イコール
          chmin(dp[s][t], dp[s - 1][t - 1]);
        } else {
          // 変更操作
          chmin(dp[s][t], dp[s - 1][t - 1] + 1);
        }
      }

      // Sに対する削除操作
      if (s > 0) {
        chmin(dp[s][t], dp[s - 1][t] + 1);
      }

      // Sに対する挿入操作(Tに対する削除操作)
      if (t > 0) {
        chmin(dp[s][t], dp[s][t - 1] + 1);
      }
    }
  }

  for (int i = 0; i < S.size() + 1; i++) {
    for (int w = 0; w < T.size() + 1; w++) {
      cout << dp[i][w] << ", ";
    }
    cout << endl;
  }
}