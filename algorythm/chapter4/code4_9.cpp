
#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> a) {
  cout << "i =" << i << endl;
  cout << "w =" << w << endl;

  if (i == 0) {
    if (w == 0) return true;
    else return false;
  }

  bool result1 = func(i - 1, w - a[i - 1], a);
  cout << "===Result1 S===" << endl;
  cout << "i =" << i << endl;
  cout << "w =" << w << endl;
  cout << "===Result1 F===" << endl;
  if (result1) return true;

  bool result2 = func(i - 1, w, a);
  cout << "===Result2 S===" << endl;
  cout << "i =" << i << endl;
  cout << "w =" << w << endl;
  cout << "===Result2 F===" << endl;
  if (result2) return true;

  return false;
}

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a[i];

  if (func(N, W, a)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}