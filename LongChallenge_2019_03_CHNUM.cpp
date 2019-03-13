// code_report Solution Video
// Video Link: https://youtu.be/51Bj6NCHKL0
// Problem Link: https://www.codechef.com/MARCH19B/problems/CHNUM/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(vector<int> const& v, int n) {
   int a = count_if(v.begin(), v.end(), [](auto e) { return e < 0; });
   int b = n - a;
   if (a == n || a == 0) cout << n << ' ' << n << endl;
   else                  cout << max(a, b) << ' ' <<  min(a, b) << endl;
}

int main() {
   int t, n; cin >> t;
   while (t--) {
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; ++i) cin >> v[i];
      solve(v, n);
   }
   return 0;
}
