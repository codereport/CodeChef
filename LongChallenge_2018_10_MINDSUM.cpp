// code_report Solution
// https://youtu.be/vJ9LF0h-N1g

#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric>
#include <queue>
#include <map>

using namespace std;

using ll = long long;

auto digit_sum(ll n) {
   auto sum = 0LL;
   while (n) sum += n % 10, n /= 10;
   return sum;
}

void solve(ll n, ll d) {
   queue<pair<ll, ll>> q;
   q.push({ n, 0 });
   int i = 0;
   map<int, int> m;
   while (i < 100000 && !q.empty()) {
      auto t = q.front(); q.pop();
      if (t.first < 10) { // single digit       
         if (m.find(t.first) != m.end()) continue;
         else m[t.first] = t.second;
      } else {            // double digit
         q.push({ digit_sum(t.first), t.second + 1 });
      }

      q.push({ t.first + d, t.second + 1 });
      i++;
   }

   cout << m.begin()->first << ' ' << m.begin()->second << endl;
}

int main() {
   int t; cin >> t;
   while (t--) {
      ll n, d; cin >> n >> d;
      solve(n, d);
   }
   return 0;
}
