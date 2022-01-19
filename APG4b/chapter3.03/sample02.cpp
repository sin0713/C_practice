#include <bits/stdc++.h>
using namespace std;
 
int main() {
  queue<int> q;
  q.push(10);
  q.push(3);
  q.push(6);
  q.push(1);

  while(!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
}


