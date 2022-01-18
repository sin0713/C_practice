#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a = 10, b = 5;
  int answer = min(a, b);
  cout << answer << endl;
  
  answer = max(a, b);
  cout << answer << endl;
  cout << "---------------" << endl;

  swap(a, b);
  cout << a << endl;
  cout << b << endl;
  cout << "---------------" << endl;

  vector<int> vec = {1, 5, 3};
  reverse(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;

  }

  vec.push_back(10);
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}
