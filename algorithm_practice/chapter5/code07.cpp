#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax() {

}

int main() {
  int N; long long W;
  cin >> N >> W;

  vector<long long> weight(N);
  vector<long long> value(N);

  for (int i = 0; i < N; i++) cin >> weight[i] >> value[i];

  vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

  for (int i = 0; i < N; i++) {
    for (int w = 0; w <= N; w++) {
      if (w - weight(i) >= 0) {
        chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
      }

      chmax(dp[i + 1][w], dp[i][w]);
    }
  }

  cout >> dp[N][W] >> endl;
}

