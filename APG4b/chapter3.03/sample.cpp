#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> score;

  score["Alice"] = 100;
  score["Bob"] = 89;
  score["Charlie"] = 95;

  cout << score.at("Alice") << endl;
  cout << score.at("Bob") << endl;
  cout << score.at("Charlie") << endl;

  cout << score["Taro"] << endl;
  cout << "------------------" << endl;

  if (score.count("Alice")) {
    cout << "Alice: " << score.at("Alice") << endl;
  }

  cout << "------------------" << endl;

  for (auto p : score) {
    auto k = p.first;
    auto v = p.second;

    cout << k << "=>" << v << endl;
  }
}

