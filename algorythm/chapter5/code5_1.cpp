#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

int N;
vector<long long> dp;
vector<int> heights;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

long long find(int i) {
  if (dp[i] < INF) return dp[i];
  if (i == 0) return 0;

  chmin(dp[i], find(i - 1) + abs(heights[i] - heights[i - 1]));
  if (i > 1) chmin(dp[i], find(i - 2) + abs(heights[i] - heights[i - 2]));

  return dp[i];
}

int main() {
  cin >> N;

  heights.resize(N);
  for (int i = 0; i < N; i++) cin >> heights[i];

  dp.assign(N, INF);
  dp[0] = 0;

  find(N - 1);

  cout << dp[N -1] << endl;
}