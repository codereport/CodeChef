// code_report Solution
// https://youtu.be/w1cDf-rjjU4

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

#define FORI(s,n) for(int i = s; i < n; i++)
#define FORJ(s,n) for(int j = s; j < n; j++)

using vi = vector<int>;
using vs = vector<string>;

int main ()
{
   int t; cin >> t;
   while (t--) {
      int n, m; cin >> n >> m;
      vs v (n);
      vi r (n, 0), c (m, 0); // r = rows, c = cols

      FORI (0, n) {
         string s; cin >> s;
         v[i] = s;
         FORJ (0, m) if (v[i][j] == '1') r[i]++, c[j]++;
      }

      bool all_zeros = all_of (r.begin (), r.end (), [](auto i) { return i == 0; });
      
      FORI (0, n) {
         FORJ (0, m) {
            if      (all_zeros)      cout << -1 << ' ';
            else if (v[i][j] == '1') cout <<  0 << ' ';
            else if (r[i] || c[j])   cout <<  1 << ' ';
            else                     cout <<  2 << ' ';
         }
         cout << endl;
      }
   }

   return 0;
}
