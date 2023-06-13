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
  int N;
  cin >> N;

  vector<vector<long long>> c(N + 1, vector<long long>(N + 1, INF));
  for (int i = 0; i < N + 1; i++) {
    for(int j = 0; j < N + 1; j++) {
      if (i == 0 && j == 3) {
        c[i][j] = 1;
      } else if (i == 3 && j == 7) {
        c[i][j] = 1;
      } else if (i == 7 && j == 8) {
        c[i][j] = 1;
      } else if(i == 8 && j == 10) {
        c[i][j] = 1;
      }
    }
  }

  vector<long long> dp(N + 1, INF);
  dp[0] = 0;

  for (int i = 0; i < N + 1; i++) {
    for (int j = 0; j < i; j++) {
      chmin(dp[i], dp[j] + c[j][i]);
    }
  }

  cout << "result: " << dp[N] << endl;
}