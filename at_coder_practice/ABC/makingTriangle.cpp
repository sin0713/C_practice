#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> v(N);
  for (int i=0; i<N; i++) cin >> v[i];
  sort(v.begin(), v.end());
  int ans = 0;

  for(int i=0; i<N; i++) {
    for(int j=0; j<i; j++) {
      for(int k=0; k<j; k++) {
        if(v[i] == v[j]) continue;
        if(v[j] == v[k]) continue;
        if (v[j] + v[k] <= v[i]) continue;
        ans++;
      }
    }
  }

  cout << ans << endl;
}