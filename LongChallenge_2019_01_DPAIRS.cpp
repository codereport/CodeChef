// code_report Solution
// Video Link: https://youtu.be/N7FBSGN0W24
// Problem Link: https://www.codechef.com/JAN19A/problems/DPAIRS/

#include <unordered_set>
#include <iostream>
#include <map>

using namespace std;

int main() {
   int n, m, x; cin >> n >> m;
   map<int, int> a, b;
   for (int i = 0; i < n; ++i) cin >> x, a[x] = i;
   for (int i = 0; i < m; ++i) cin >> x, b[x] = i;

   unordered_set<int> seen;
   auto front = false;
   auto i = begin(a), j = --end(a);
   while (seen.size() < n + m - 1) {
      front = !front;
      auto x = front ? i : j;
      for (auto y : b) {
         auto it = seen.insert(x->first + y.first);
         if (it.second) 
            cout << x->second << ' ' << y.second << endl;
         if (seen.size() == n + m - 1)
            break;
      }
      if (front) ++i; else --j;
   }

   return 0;
}
