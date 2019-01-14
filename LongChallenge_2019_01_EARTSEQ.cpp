// code_report Solution
// Video Link: https://youtu.be/4yEq15NoN-M
// Problem Link: https://www.codechef.com/JAN19A/problems/EARTSEQ

#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
   if (b == 0) return a;
   return gcd(b, a % b);
}

vector<int> generate_primes() {
   // sieve of erastothenes
   vector<int> l(32000, 1);
   for (int i = 2; i < l.size() / 2; ++i) {
      if (l[i] == 0) continue;
      for (int j = 2 * i; j < l.size(); j += i) l[j] = 0;
   }
   vector<int> primes;
   for (int i = 2; i < l.size(); ++i)
      if (l[i]) primes.push_back(i);
   return primes;
}

void output_answer(const vector<int>& v) {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      if      (n == 4) cout << "6 10 35 21\n";
      else if (n == 5) cout << "6 10 55 77 21\n";
      else if (n == 6) cout << "6 10 55 77 91 39\n";
      else if (n == 8) cout << "6 10 55 77 91 143 187 51\n";
      else {
         for (int i = 0; i < n - 1; ++i) 
            cout << v[i] << ' ';
         int fac = gcd(v[n - 1], v[n - 2]);
         cout << fac * 3 << endl;
      }
   }
}

const int MAX = 1000000000;
enum step_type {
   FIRST,
   SECOND
};

int main() {
   auto primes = generate_primes();
   vector<int> v;
   auto i = 0, j = 1, a = 3, b = 7;
   auto ok = true;

   auto step = [&](auto s) {
      int val = primes[i] * primes[j];
      if (val > MAX) {
         int idx = s == FIRST ? j : i;
         v.push_back(primes[idx] * primes[a]);
         i = a, j = b, b += 3;
         if (s == SECOND) ok = false, --i, ++j;
      } else {
         v.push_back(val);
         ok = true;
      }
   };

   while (v.size() < 50005) {
      if (ok) { step(FIRST); j++; }
      step(SECOND); i++;
   }

   output_answer(v);

   return 0;
}
