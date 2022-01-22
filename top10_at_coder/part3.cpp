#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);

  for (int i = 0; i < N; i++) cin >> a[i];

  int res = 0;

  while(true) {
    bool exist_odd = false;

    for (int i = 0; i < N; i++) {
      if(a[i] % 2 != 0) exist_odd = true;
    }

    if (exist_odd) break;

    for(int i = 0; i < N; i++) {
      a[i] /= 2;
    }

    res++;
  }

  cout << res << endl;

}
