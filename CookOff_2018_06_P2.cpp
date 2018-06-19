// code_report
// 
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

template<typename InIt>
auto adjacent_count_greater_than (InIt first, InIt last) {
   auto num = 0;
   auto it  = first;
   while (true) {
      it = adjacent_find (it, last, [](auto a, auto b) { return b > a; });
      if (it == last) return num;
      num++, it++;
   }
}

int main () {
   int t, n, k; cin >> t;
   while (t--) 
   {
      cin >> n >> k;                   // a - indices with no numbers
      vector<int> a, b (n), c;         // b - unfinished permutation
                                       // c - missing numbers
      for (int i = 0; i < n; ++i) {
         cin >> b[i];
         if (b[i] == 0) a.push_back (i);
      }
      
      for (int i = 1; i <= n; ++i) {
         if (find (b.begin (), b.end (), i) == b.end ()) c.push_back (i);
      }

      int ans = 0;

      do {
         auto d = b; // finished permutation
         for (int i = 0; i < a.size (); ++i) d[a[i]] = c[i];
         if (adjacent_count_greater_than (d.begin (), d.end ()) == k) ans++;
      } while (next_permutation (c.begin (), c.end ()));
      
      cout << ans << endl;
   }

   return 0;
}
