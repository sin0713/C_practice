#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

using Interval = pair<int, int>;

bool cmp(Interval &a, Interval &b) {
  return a.second < b.second;
}

int main() {
  int N;
  cin >> N;

  vector<Interval> inter(N);
  for (int i = 0; i < N; i++) cin >> inter[i].first >> inter[i].second;

  sort(inter.begin(), inter.end(), cmp);

  int res = 0;
  int current_end_time = 0;
  vector<int> a(100);

  for(int i = 0; i < N; i++) {
    if (inter[i].first < current_end_time) continue;

    res++;
    current_end_time = inter[i].second;
    a.push_back(inter[i].first);
    a.push_back(inter[i].second);
  }

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << endl;
  }

  cout << "-------------------" << endl;

  cout << res << endl;
}