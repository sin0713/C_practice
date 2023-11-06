#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// マクロ
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct Company
{
  int time;
  int num;
};

int main() {
  int N;
  cin >> N;
  vector<Company> companies(N);
  rep(i, N) {
    int w;
    int x;
    cin >> w >> x;
    Company company = {x, w};
    companies[i] = company;
  }

  int ans = 0;
  rep(i, 24) {
    // iは世界標準時における会議の開始時間
    int sum = 0;
    rep(j, N) {
      Company company = companies[j];
      int res = (i + company.time) % 24;
      if (res >= 9 && res < 18) {
        sum += company.num;
      }
    }
    ans = max(ans, sum);
  }

  cout << ans << endl;
  return 0;
}
