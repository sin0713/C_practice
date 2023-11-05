#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a;
  int b;

  cin >> a >> b;

  int c = a * b;

  int res = c % 2;

  string ans = res == 0 ? "Even" : "Odd";

  cout << ans << endl;

  return 0;
}