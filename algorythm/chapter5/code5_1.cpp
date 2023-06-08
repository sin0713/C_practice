#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

int main() {
  int N;
  cin >> N;

  vector<int> heights(N);
  for (int i = 0; i < N; i++) cin >> heights[i];

  vector<long long> dp(N, INF);

  for (int i = 0; i < N; i++) {
    if (i == 0) {
      dp[i] = 0;
    } else if (i == 1) {
      dp[i] = dp[i - 1] + heights[i];
    } else {
      int dp1 = dp[i - 1] + abs(heights[i] - heights[i - 1]);
      int dp2 = dp[i - 2] + abs(heights[i] - heights[i - 2]);

      dp[i] = min(dp1, dp2);
    }
  }

  cout << dp[N -1] << endl;
}