// code_report Solution
// https://youtu.be/xfvvyKms49Y

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int d = pow(2, n);
      vector<int> v(25); 
      v[0] = d / 2;
      v[1] = d / 4;
      for (int i = 2; i < n; ++i) 
         v[i] = (v[i - 1] + v[i - 2]) / 2;
      cout << v[n - 1] << ' ' << d << ' ';
   }
   return 0;
}
