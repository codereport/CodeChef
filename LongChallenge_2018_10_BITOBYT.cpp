// code_report Solution
// https://youtu.be/EbgOk_IDl1I

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
   int t; cin >> t;
   while (t--) {
      vector<long long> v = { 1, 0, 0 };
      int n; cin >> n;
      for (int i = 3; i <= n; ++i) {
         int d = i % 26;
         if (d == 3)  swap(v[1], v[0]);
         if (d == 11) swap(v[2], v[1]);
         if (d == 1)  swap(v[0], v[2]), v[0] *= 2;
      }
      cout << v[0] << ' ' << v[1] << ' ' << v[2] << endl;
   }
   return 0;
}
