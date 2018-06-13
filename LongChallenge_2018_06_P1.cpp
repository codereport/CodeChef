// code_report Solution
// https://youtu.be/r9yvzd0tTJQ

#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <iomanip>

using namespace std;

// SOLUTION 1:

int main ()
{
   int t; cin >> t;

   while (t--) {
      int n, a, b;
      cin >> n >> a >> b;
      unordered_map<int, double> m;

      for (int i = 0; i < n; ++i) {
         int x; cin >> x;
         m[x]++;
      }

      cout << fixed << setprecision (10) << m[a] * m[b] / (n * n) << endl;
   }

   return 0;
}


// SOLUTION 2:

int main ()
{
   int t; cin >> t;

   while (t--) {
      int n, a, b;
      double c = 0, d = 0;
      cin >> n >> a >> b;

      for (int i = 0; i < n; ++i) {
         int x; cin >> x;
         if (x == a) c++;
         if (x == b) d++;
      }

      cout << fixed << setprecision (10) << c * d / (n * n) << endl;
   }

   return 0;
}

// SOLUTION 3:

int main ()
{
   int t; cin >> t;

   while (t--) {
      int n, a, b;
      cin >> n >> a >> b;
      vector<int> v (n);
      for (int i = 0; i < n; ++i) cin >> v[i];

      cout << fixed << setprecision (10)
           << count (v.begin (), v.end (), a) *
              count (v.begin (), v.end (), b) / ((double)n * n) << endl;
   }

   return 0;
}
