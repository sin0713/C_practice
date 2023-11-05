#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = false;
  rep(i, N - 1) {
    if (S[i] == 'a' && S[i + 1] == 'b') {
      ans = true;
    }
    if (S[i] == 'b' && S[i + 1] == 'a') {
      ans = true;
    }
  }

  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }


  return 0;
}