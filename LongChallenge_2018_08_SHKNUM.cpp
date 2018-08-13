// code_report Solution
// https://youtu.be/yMxoRT381yQ

#include <algorithm>
#include <iostream>
#include <cmath>
#include <set>

using namespace std;

auto precompute_m () {
   set<int> s;
   for (int i = 0; i <= 30; ++i)
      for (int j = 0; j <= 30; ++j)
         if (i != j) s.insert (pow (2, i) + pow (2, j));
   return s;
}

auto calculate_moves (const set<int>& s, int N) {
   if (N < 3) return 3 - N;     
   auto it = s.lower_bound (N);
   if (N == *it) return 0;      
   return min (N - *prev (it), *it - N);
}

int main () {
   auto s = precompute_m ();
   int t; cin >> t;
   while (t--) {
      int N; cin >> N;
      cout << calculate_moves (s, N) << endl;
   }
   return 0;
}  
