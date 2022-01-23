#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  int M, N;
  cin >> N >> M;

  vector<int> a(M), b(M);
  for(int i = 0; i<M; i++) cin >> a[i] >> b[i];

  vector<int> road(N, 0);

  for (int i = 0; i < M; i++) {
    road[a[i] - 1] ++;
    road[b[i] - 1] ++;
  }

  for (int i = 0; i<N; i++) cout << road[i] << endl;


}

