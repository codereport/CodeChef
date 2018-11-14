// code_report Solution
// https://youtu.be/eVQ0kvhwQAg

#include <vector>
#include <iostream>
#include <set>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

class dense_ring {
   list<pair<int, int>> l;
   multiset<int> s;
   const int INIT_SIZE = 1;

   void pop_or_decrement_back() {
      if (l.back().first > 1) l.back().first--;
      else l.pop_back();
   }

   void push_or_increment_front(int i) {
      if (l.front().second == i) l.front().first++;
      else l.push_front({ INIT_SIZE, i });
   }

   void decrease_sequence(int sz) {
      s.erase(s.find(sz));
      if (sz > 1) s.insert(sz - 1);
   }

   void increase_sequence(int sz) {
      if (sz != 0) s.erase(s.find(sz));
      s.insert(sz + 1);
   }

public:

   dense_ring(const vector<int>& v) {
      // initialize dense linked list
      l.push_back({ INIT_SIZE, v[0] });
      for (int i = 1; i < v.size(); ++i) {
         if (v[i] == l.back().second) l.back().first++;
         else l.push_back({ INIT_SIZE, v[i] });
      }

      // initialize set that contains sequence lengths
      for (auto i : l) {
         if (i.second) s.insert(i.first);
      }
   }

   void rotate() {
      // update multiset
      if (l.back().second == 1) {
         decrease_sequence(l.back().first);
         int sz = l.front().second == 1 ? l.front().first : 0;
         increase_sequence(sz);
      }
      // update list
      push_or_increment_front(l.back().second);
      pop_or_decrement_back();
   }

   int max_seq_of_ones() const {
      return *--s.end();
   }
};

int main() {
   int n, q, k;
   cin >> n >> q >> k;
   vector<int> v(n);
   for (int i = 0; i < n; ++i) cin >> v[i];
   string s; cin >> s;

   if (count(begin(v), end(v), 0) == n) {
      for (auto i : s) if (i == '?') cout << 0 << endl;
   } else if (count(begin(v), end(v), 1) == n) {
      for (auto i : s) if (i == '?') cout << min(k, n) << endl;
   } else {else {
      dense_ring d(v);
      for (auto i : s) {
         if (i == '?') cout << min(k, d.max_seq_of_ones()) << endl;
         else d.rotate();
      }
   }

   return 0;
}
