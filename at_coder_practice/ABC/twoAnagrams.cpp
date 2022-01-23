#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  sort(s.begin(), s.end());
  
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());

  if (s < t) cout << "Yes" << endl;
  else cout << "No" << endl;

}