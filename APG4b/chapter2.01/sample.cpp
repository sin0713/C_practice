#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  cin >> a;
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
 
 int answer = 0;
 for (int i = 0; i < 5; i++) {
   if(a == data.at(i)) {
     answer++;
   }
 }

 cout << answer << endl;
}