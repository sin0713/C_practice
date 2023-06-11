
#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int N;
  int W;
  cin >> N >> W;

  vector<int> weights(N);
  vector<int> values(N);

  for (int i = 0; i < N; i++) cin >> weights[i] >> values[i];

  vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

  for (int i = 0; i < N; i++) {
    for (int w = 0; w <= W; w++) {
      if (w - weights[i] >= 0) {
        chmax(dp[i + 1][w], dp[i][w - weights[i]] + values[i]);
      }

      chmax(dp[i + 1][w], dp[i][w]);
    }
  }

  for (int i = 0; i < N + 1; i++) {
    for (int w = 0; w <= W; w++) {
      cout << dp[i][w] << ", ";
    }
    cout << endl;
  }

}