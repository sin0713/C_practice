#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for (int i=0; i<N; i++) cin >> s[i];

  int M;
  cin >> M;
  vector<string> t(M);
  for (int i=0; i<M; i++) cin >> t[i];

  
  int answer = 0;

  for(int i = 0; i<N; i++) {
    int score = 0;
    for (int j = 0; j<N; j++) {
      if (s[i] == s[j]) score++;
    }
    for (int j=0; j<M; j++) {
      if (s[i] == t[j]) score--;
    }

    answer = max(answer, score);
  }

  cout << answer << endl;
}
