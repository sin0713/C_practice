#include <iostream>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <set>
using namespace std;

int main() {
  vector<long long> memo(1 << 20);
  set<int> st;


  for (int i = 1; i<30; i++) {
    for(int j = 1; j < 40; j++) {
      for (int k = 1; k < 10; k++) {
        int sum = 0;
        sum = 205 * i + 82 * k + 30 * j;
        st.insert(sum);
      }
    }
  }

  cout << st.size() << endl;
}