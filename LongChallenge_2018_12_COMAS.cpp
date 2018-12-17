// code_report Solution
// https://youtu.be/2F1cRSBCDJ4

#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

template<class F>
auto guess5(F f) {
   cout << "? ";
   for (int i = 0; i < 5; ++i, ++f) 
      cout << *f << ' ';
   cout << endl;
   int a, b; cin >> a >> b;
   return make_pair(a, b);
}

auto create_set(int size, int start) {
   set<int> s;
   for (int i = start; i < start + size; ++i)
      s.insert(s.end(), i);
   return s;
}

void reduce_set_to_6(set<int>& s) {
   int a, b;
   while (s.size() > 6) {
      tie(a, b) = guess5(begin(s));
      s.erase(s.find(a));
      if (s.size() > 6) s.erase(s.find(b));
   }
}

auto find_max(const set<int>& s) {
   int a, b;
   vector<int> u(s.begin(), s.end());
   map<int, int> m;
   set<int> out;
   vector<int> x;
   for (int i = 0; i < 6; ++i) {
      tie(a, b) = guess5(begin(u) + 1);
      m[a]++, m[b]++;
      out.insert({ a, b });
      x.push_back(a + b);
      rotate(begin(u), begin(u) + 1, end(u));
   }
   auto l = [](auto a, auto b) { return a.second < b.second; };
   auto p = minmax_element(begin(m), end(m), l);
   auto t = p.first->first + p.second->first;
   for (int i = 0; i < 6; ++i) {
      if (x[i] == t && !out.count(u[i]))
         return u[i];
   }
}

int main() {
   int t, n; cin >> t;
   while (t--) {
      int n; cin >> n;
      auto s = create_set(n, 1);
      reduce_set_to_6(s);
      auto i = find_max(s);
      cout << "! " << i << endl;
   }
   return 0;
}
