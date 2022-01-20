#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int cnt = 0;

  for (int x = 0; x <= min(N, K); x++) {
    for (int y = 0; y <= min(N, K); y++) {
      int z = N - x - y;

      if(0 <= z && z <= K) {
        cnt ++;
      }
    }
  }

  cout << cnt << endl;
}
