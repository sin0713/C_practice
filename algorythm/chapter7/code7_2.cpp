#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Interval = pair<int, int>;

bool cmp(const Interval &a, const Interval &b) {
  return a.second < b.second;
}

int main() {
  int N;
  cin >> N;

  // 区間の入力値を受け取る
  vector<Interval> intervals(N, Interval(-1, -1));
  for (int i = 0; i < N; i++) {
    cin >> intervals[i].first >> intervals[i].second;
  }

  // 区間の終値でソート
  sort(intervals.begin(), intervals.end(), cmp);

  int current_end_time = 0;
  int result = 0;
  for (int i = 0; i < N; i++) {
    if(intervals[i].first < current_end_time) continue;

    current_end_time = intervals[i].second;
    cout << "current_end_time " << current_end_time << endl;
    result++;
  }

  cout << "result " << result << endl;

  return 0;
}