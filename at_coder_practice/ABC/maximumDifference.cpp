#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
const long long INF = 1 << 20;

int main() {
  int N;
  cin >> N;

  vector<long long> a(N);
  for (int i = 0; i<N; i++) cin >> a[i];

  sort(a.begin(), a.end());

  int res = a[a.size() - 1] - a[0];

  cout << res << endl;
  cout << "--------------" << endl;

  int min = INF;
  int max = -1;

  for(int i=0; i<N; i++) {
    if(min > a[i]) min = a[i];
    else if (max < a[i]) max = a[i];
  }

  cout << max - min << endl;
}