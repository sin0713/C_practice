#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
  int N;
  int sum = 0;
  cin >> N;

  vector<int> vec(N);

  for (int i = 0; i < N; i++)
  {
    cin >> vec.at(i);
    sum += vec.at(i);
  }

  int average = sum / N;

  for (int i = 0; i < N; i++)
  {
    cout << abs(vec.at(i) - average) << endl;
  }
}
