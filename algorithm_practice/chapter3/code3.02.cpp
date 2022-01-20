#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, v;
  cin >> N >> v;

  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a.at(i);

  int found_id = -1;

  for (int i = 0; i < N; ++i) {
    if(v == a.at(i)) {
      found_id = i;
      break;
    }
  }

  cout << found_id << endl;
}