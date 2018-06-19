// code_report
// 

#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int main () {
   int t, n, k; cin >> t;
   while (t--) 
   {
      cin >> n >> k;                   // a - indices with no numbers
      vector<int> a, b (n), c (n);     // b - unfinished permutation
      iota (c.begin (), c.end (), 1);  // c - missing numbers

      for (int i = 0; i < n; ++i) {
         cin >> b[i];
         if (b[i] == 0) a.push_back (i);
         else c.erase (find (c.begin (), c.end (), b[i]));
      }

      int ans = 0;

      do {
         auto d = b; // finished permutation
         for (int i = 0; i < a.size (); ++i) d[a[i]] = c[i];
         int j = 0;
         for (int i = 0; i < n - 1; ++i) if (d[i + 1] > d[i]) j++;
         if (j == k) ans++;
      } while (next_permutation (c.begin (), c.end ()));
      
      cout << ans << endl;
   }
   return 0;
}
