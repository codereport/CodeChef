// code_report Solution
// https://youtu.be/T90wYFVY_3g

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
   int n, c; cin >> n >> c;
   int cur = 1, lg = 1, skip = max(1, n / 100), bad = n;
   
   auto dec_skip = [&] {
      skip /= 10;
      skip = max(1, skip);
      cur = min(lg + skip, n);
   };

   while (true) {
      if (cur >= bad) {
         if (skip == 1) {
            cout << 3 << ' ' << cur << endl;
            break;
         }
         dec_skip();
      }
      cout << 1 << ' ' << cur << endl;
      int in; cin >> in;
      if (in == 0) lg = cur, cur += skip;
      if (in == 1) {
         if (skip == 1) {
            cout << 3 << ' ' << cur << endl;
            break;
         } else if (cur == 1) {
            cout << 3 << ' ' << 1 << endl;
            break;
         }
         bad = min(bad, cur);
         cout << 2 << endl;
         dec_skip();
      }
   }
   return 0;
}
