// code_report Solution
// https://youtu.be/DV7_ZNyMjW0

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

int min_difference (vector<int>& v) {
   sort (v.begin (), v.end ());
   vector<int> d (v.size ());
   adjacent_difference (v.begin (), v.end (), d.begin ());
   return *min_element (d.begin () + 1, d.end ());
}

int main () {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      vector<int> v (n);
      for (int i = 0; i < n; ++i) cin >> v[i];
      cout << min_difference (v) << endl;
   }

   return 0;
}
