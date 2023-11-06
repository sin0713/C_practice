#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H;
  int W;
  cin >> H >> W;
  vector<vector<char>> table(H, vector<char>(W));
  rep(i, H) {
    string s;
    cin >> s;
    rep(j, W) {
      table[i][j] = s[j];
    }
  };

  rep(i, H) {
    rep(j, W) {
      for (int k = -1; k < 2; k++) {
        for (int l = -1; l < 2; l++) {
          int x = i + k;
          int y = j + l;
          if (x < 0 || x >= W) { continue; }
          if (y < 0 || y >= H) { continue; }
          if (table[i][j] == )

        }
      }
    }
  }




  return 0;
}