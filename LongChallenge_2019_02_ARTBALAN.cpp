// code_report Solution
// Video Link: https://youtu.be/zAWgrPnaIcs
// Problem Link: https://www.codechef.com/FEB19B/problems/ARTBALAN

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

#define LIFT_THRICE(...)                \
        noexcept(noexcept(__VA_ARGS__)) \
        -> decltype(__VA_ARGS__)        \
        {                               \
          return __VA_ARGS__;           \
        }

namespace lift {
   template <typename T>
   inline constexpr auto equal(T&& t) {
      return[t = std::forward<T>(t)](const auto& obj) LIFT_THRICE(obj == t);
   }
}

template<class T, class P>
void erase_if(T& t, P p) {
   t.erase(remove_if(t.begin(), t.end(), p), t.end());
}

auto minimum_operations(string const& s) {
   vector<int> v(26);
   for (auto c : s) v[c - 'A']++;
   erase_if(v, lift::equal(0));
   sort(begin(v), end(v), greater<>());
   int n = s.size(), ans = n, m = v.size();
   for (int i = 1; i <= min(n, 26); ++i) {
      if (n % i != 0) continue;
      int a = 0, b = 0;
      for (int j = 0; j < min(m, i); ++j) {
         int diff = v[j] - n / i;
         if (diff > 0) a += diff;
         if (diff < 0) b -= diff;
      }
      ans = min(ans, max(a, b));
   }
   return ans;
}

int main() {
   int t; cin >> t;
   while (t--) {
      string s; cin >> s;
      cout << minimum_operations(s) << endl;
   }
   return 0;
}
