#include <bits/stdc++.h>
using namespace std;
 
 void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
   minimum = min(a, min(b, c));
   maximum = max(a, max(b, c));
 }

 int main() {
   int minimum, maximum;
   min_and_max(3, 1, 5, minimum, maximum);
   cout << "minumum: " << minimum << endl;
   cout << "maximum: " << maximum << endl;
 }
 