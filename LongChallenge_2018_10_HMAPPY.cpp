// code_report Solution
// https://youtu.be/UzwNDRjCEE4

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using ll = long long;
#define FORI(s,n) for(int i = s; i < n; i++)

ll balloons_needed(const vector<ll>& a, const vector<ll>& b, ll candies) {
   ll c = 0;
   FORI (0, a.size()) {
      if (b[i] == 0) continue;
      c += max(a[i] - candies / b[i], 0LL);
   }
   return c;
}

int main() {
   int n;
   ll m, l = 0, r = 0; // l = left, r = right
   cin >> n >> m;
   vector<ll> a(n), b(n);

   FORI (0, n) cin >> a[i];
   FORI (0, n) cin >> b[i];
   FORI (0, n) r = max(r, a[i] * b[i]);

   while (l < r) {
      ll mid      = (l + r) / 2;
      ll balloons = balloons_needed(a, b, mid);
      if (balloons <= m) r = mid;
      else               l = mid + 1;
   }

   cout << l << endl;

   return 0;
}
