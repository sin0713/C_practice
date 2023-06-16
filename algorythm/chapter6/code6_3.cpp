#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;
const vector<int> list = {3, 5, 8, 10, 14, 17, 21, 39};

void find() {
  int left = 20;
  int right = 36;
  int mid;

  while(right - left > 1) {
    mid = left + (right - left) / 2;

    cout << "Is the age less than " << mid << " ? (yes/no)" << endl;
    string ans;
    cin >> ans;

    if (ans == "yes") right = mid;
    else left = mid;
  }

  cout << "your age is " << left << "!";
}

int main() {
  find();
}