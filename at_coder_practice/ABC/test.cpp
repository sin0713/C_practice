#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <functional>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int M = 1234567890;
  int N = 2000000;
  int sum = 0;

  for (int i = 1; i <=N; i++) {
    if (M % i == 0) {
      sum += i;
    }

  }

  cout << sum << endl;


}