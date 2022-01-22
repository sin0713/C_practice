#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findSumOfDigits(int n) {
  int sum = 0;
  while(n > 0) {
    sum += n % 10;
    n /= 10;
  }

  return sum;
}

int main() {
  int N;
  cin >> N;
  int A, B;
  cin >> A >> B;

  int res = 0;

  for (int i = 1; i <= N; i++) {
    int sum = findSumOfDigits(i);
    if (sum >= A && sum <= B) {
      res += i;
    }

  }

  cout << res << endl;
}