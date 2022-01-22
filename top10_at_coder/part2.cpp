#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;

  int cnt = 0;

  for (int i = 0; i < 3; i++) {
    if(s[i] == '1') {
      cnt ++;
    }
  }

  cout << "1が" << cnt << "個含まれています" << endl;


}
