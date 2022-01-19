#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  map<int, int> data;

  for (int c : vec) {
    if (data.count(c)) {
      data.at(c) ++;
    } else {
      data[c] = 1;
    }
  }

  int max_count = 0;
  int answer = 0;

  for (int c : vec) {
    if (data.at(c) > max_count) {
      max_count = data.at(c);
      answer = c;
    }
  }

  cout << answer << " " << max_count << endl;

}