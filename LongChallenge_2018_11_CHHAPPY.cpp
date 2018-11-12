// code_report Solution
// https://youtu.be/M8InS_qg-2Y

#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define FORI(s,n) for(int i = s; i < n; i++)

int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      vector<int> v(n);
      FORI(0, n) cin >> v[i], --v[i];
      unordered_map<int, unordered_set<int>> m;
      FORI(0, n) m[v[v[i]]].insert(v[i]);
      bool h = any_of(begin(m), end(m), [](const auto& p) { return p.second.size() > 1; });
      cout << (h ? "Truly Happy\n" : "Poor Chef\n");
   }
   return 0;
}
