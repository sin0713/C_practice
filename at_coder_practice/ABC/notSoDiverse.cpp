#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <functional>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for(int i=0; i<N; i++) cin >> A[i];

  map<int, int> cnt;
  for (int i=0; i<N; i++) cnt[A[i]]++;

  vector<int> v;
  for (auto &c: cnt) {
    v.push_back(c.second);
  }
  sort(v.begin(), v.end());

  int n = v.size();

  if (n <= K) cout << 0 << endl;
  else  {
    int ans = 0;
    for (int i = 0; i<n-K; i++) ans += v[i];
    cout << ans << endl;
  }
}
