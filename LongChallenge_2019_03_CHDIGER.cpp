// code_report Solution Video
// Video Link: https://youtu.be/Akv1lPXjweY
// Problem Link: https://www.codechef.com/MARCH19B/problems/CHDIGER/

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

auto solve(string s, char d) {
   int n = s.size();
   int min_so_far = min(s.back(), d);
   for (int i = n - 1; i >= 0; i--) {
      if (s[i] < min_so_far) {
         min_so_far = s[i];
      } else if (s[i] > min_so_far){
         s.erase(i, 1);
      }
   }
   s.resize(n, d);
   return s;
}

int main() {
   int t; cin >> t;
   while (t--) {
      string s; char c;
      cin >> s >> c;
      cout << solve(s, c) << endl;
   }
   return 0;
}
