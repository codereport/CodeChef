// code_report Solution
// Video Link: https://youtu.be/_I2MIuvbGog
// Problem Link: https://www.codechef.com/JAN19A/problems/HP18/

#include <vector>
#include <iostream>

using namespace std;

int main() {
   int t; cin >> t;
   while (t--) {
      int n, a, b; 
      cin >> n >> a >> b;
      vector<int> v(n);
      for (int i = 0; i < n; ++i) cin >> v[i];
      int both = 0, A = 0, B = 0;
      for (auto e : v) {
         if (e % a == 0 && e % b == 0) both++;
         else if (e % a == 0) A++;
         else if (e % b == 0) B++;
      }
      cout << (A > B - (both > 0) ? "BOB\n" : "ALICE\n");
   }
   return 0;
}
