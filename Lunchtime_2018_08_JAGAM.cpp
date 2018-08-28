// code_report Solution 
// https://youtu.be/EOt8irvqB44

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#define FORI(s,n) for(int i = s; i < n; i++)

int main () {
   int t; cin >> t;
   while (t--) {
      int n, a, b; cin >> n >> a >> b;
      vector<int> v (2 * n);
      FORI (0, n) cin >> v[2 * i], v[2 * i + 1] = -v[2 * i];

      auto e = [a, b](int i) { return i == a || i == b; };

      if (any_of (v.begin (), v.end (), e)) {
         cout << 1 << endl; // VANJA;
      }
      else if (all_of (v.begin (), v.end (), [&](int j) {
            auto f = [&](int i) { return i + j == a || i + j == b; };
            return any_of (v.begin (), v.end (), f);
         })) {
         cout << 2 << endl; // MIKSI;
      }
      else {
         cout << 0 << endl; // TIE
      }
   }

   return 0;
}
