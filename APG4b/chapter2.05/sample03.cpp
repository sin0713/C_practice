#include <bits/stdc++.h>
using namespace std;

//arg    vector<int> data
//return 要素の総和
//method 要素の足し算

int array_sum_from_i(vector<int> &data, int i) {
  if (i == data.size()) {
    return 0;
  }

  int s = array_sum_from_i(data, i + 1);

  return data.at(i) + s;
}

int array_sum(vector<int> &data) {
  return array_sum_from_i(data, 0);
}

int main() {
  vector<int> data =  {3, 4, 5, 6};

  cout << array_sum(data) << endl;

}