#include <iostream>
#include <vector>
using namespace std;

vector<long long> cache;
const int CACHE_SIZE = 50;

int fibo(int n) {
  cout << "func(" << n << ")を呼び出し" << endl;

  if (n == 0) return cache[n] = 0;
  if (n == 1) return cache[n] = 1;

  if (cache[n] != -1) {
    return cache[n];
  }

  return cache[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
  cache.assign(CACHE_SIZE, -1);
  fibo(10);
  
  for(int i = 0; i < CACHE_SIZE; i++) {
    cout << "第" << i << "項 " <<  cache[i] << endl;
  }
}