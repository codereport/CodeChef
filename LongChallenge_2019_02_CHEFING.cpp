// code_report Solution
// Video Link: https://youtu.be/g7TdGv5It7g
// Problem Link: https://www.codechef.com/FEB19B/problems/CHEFING

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define FORI(s, n) for (int i = s; i < n; i++)
#define FORJ(s, n) for (int j = s; j < n; j++)

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<string> ds(n);
    FORI(0, n) cin >> ds[i];
    vector<int> v(26);
    for (auto const& d: ds) {
      vector<int> t(26);
      for (auto i : d) t[i-'a'] = 1;
      FORI(0, 26) v[i] += t[i];
    }
    cout << count(begin(v), end(v), n) << endl;
  }
  return 0;
} 
