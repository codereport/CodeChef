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
      cin >> n >> k;
      vector<int> a (n), b; // a - unfinished permutation, b - missing numbers

      for (int i = 0; i  < n; ++i) cin >> a[i];
      for (int i = 1; i <= n; ++i) if (find (a.begin (), a.end (), i) == a.end ()) b.push_back (i);

      int ans = 0;

      do {
         auto d = a; // finished permutation
         for (int i = 0, j = 0; i < n; ++i) if (d[i] == 0) d[i] = b[j], j++;
         if (adjacent_count_greater_than (d.begin (), d.end ()) == k) ans++;
      } while (next_permutation (b.begin (), b.end ()));
      
      cout << ans << endl;
   }

   return 0;
}
