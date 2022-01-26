#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
//#pragma GCC optimize ("-O3")
using namespace std;

bool isSquare(long long n) {
  long long d = (long long)sqrt(n) - 1;
  
}

int main() {
  int N, D;
  cin >> N >> D;

  vector<vector<int>> X(N, vector<int>(D));

  for (int i=0; i<N; i++) {
    for (int j = 0; j<D; j++) {
      cin >> X[i][j];
    }
  }

  rep(i, 0, N) {
    rep(j, i + 1, N)
  }

  int d = 0;
}