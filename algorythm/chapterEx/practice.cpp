#include <iostream>
#include <vector>
using namespace std;


void foo() {
  double b[10];
  cout << "b[0] " << (size_t)&b[0] << endl;
  cout << "b[0] + 1 " << (size_t)(&b[0] + 1) << endl;
  cout << "b[1] " << (size_t)&b[1] << endl;
  cout << "&b[1] - &b[0] " << &b[2] - &b[0] << endl;

}

int main() {
  foo();

  return 0;
}