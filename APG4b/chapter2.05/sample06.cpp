#include <bits/stdc++.h>
using namespace std;

vector<int> reverse_array_from_i(vector<int> &data, int i) {
  if (i == data.size()) {
    vector<int> empty_array(0);
    return empty_array;
  }

  vector<int> tmp = reverse_array_from_i(data, i + 1);
  tmp.push_back(data.at(i));
  return tmp;
}

vector<int> reverse_array(vector<int> &data) {
  return reverse_array_from_i(data, 0);
}

int main() {
  vector<int> data = {3, 4, 5, 6};

  for (int c : reverse_array(data)) {
    cout << c << endl;
  }
}
