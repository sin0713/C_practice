#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long INF = 1LL << 60;
vector<int> h = {3, 5, 8, 10, 14, 17, 21, 39};
vector<int> s = {2, 2, 2, 2, 2, 2, 2, 2};


int main() {
  long long left = 0;
  long long right = INF;


  while(right - left > 1) {
    long long mid = (right + left) / 2;
    cout << "right " << right << endl;
    cout << "left " << left << endl;
    cout << "mid " << mid << endl;

    vector<long long> t(h.size(), 0);

    // 時間内に全ての風船を割れるか
    bool ok = true;

    // 各風船の残り時間を計算
    for (int i = 0; i < h.size(); i++) {
      if (mid < h[i]) ok = false;
      else t[i] = (mid - h[i]) / s[i];
    }

    // 時間短い順にソート
    sort(t.begin(), t.end());

    // 時間以内に割れているか判定。iは経過時間を表す
    for (int i = 0; i < t.size(); i++) {
      if (t[i] < i) ok = false;
    }

    if (ok) right = mid;
    else left = mid;

    cout << "====================" << endl;
  }

  cout << "======== result ============" << endl;
  cout << right << endl;
  cout << "======== result ============" << endl;

  return 0;
}