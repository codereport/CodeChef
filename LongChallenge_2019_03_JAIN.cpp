// code_report Solution Video
// Video Link: https://youtu.be/BizUE-IvZto
// Problem Link: https://www.codechef.com/MARCH19B/problems/JAIN/

#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

auto has_all_vowels(string a, string b) {
   set<int> s;
   for (auto e : a) s.insert(e);
   for (auto e : b) s.insert(e);
   return s.size() == 5;
}

auto shrink(string s) {
    sort(s.begin(), s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());
    return s;
}

int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      map<string, long long> m;
      for (int i = 0; i < n; ++i) {
         string s; cin >> s;
         m[shrink(s)]++;
      }
      long long ans = 0;
      for (auto e : m) {
         for (auto f : m) {
            if (e != f && has_all_vowels(e.first, f.first)) 
               ans += e.second * f.second;
         }
      }
      ans /= 2;
      auto it = m.find("aeiou");
      if (it != m.end())
         ans += (it->second * (it->second - 1)) / 2;
      cout << ans << endl;
   }
   return 0;
}
